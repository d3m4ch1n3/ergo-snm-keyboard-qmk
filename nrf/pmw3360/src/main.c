/*
 * Copyright (c) 2021 Teslabs Engineering S.L.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* Ref: https://developer.nordicsemi.com/nRF_Connect_SDK/doc/2.1.2/nrf/drivers/pmw3360.html. */

#include <stdio.h>
#include <zephyr/zephyr.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>

void main(void)
{
  const struct device *dev = DEVICE_DT_GET_ONE(pixart_pmw3360);

  if (!device_is_ready(dev))
  {
    printk("sensor: device %s not ready.\n", dev->name);
    return;
  }

  k_sleep(K_MSEC(1500));

  while (1)
  {
    struct sensor_value x;
    struct sensor_value y;
    int ret;

    ret = sensor_sample_fetch_chan(dev, SENSOR_CHAN_ALL);
    if (ret < 0)
    {
      printf("Could not fetch (%d)\n", ret);
      return ret;
    }

    ret = sensor_channel_get(dev, SENSOR_CHAN_POS_DX, &x);
    if (ret < 0)
    {
      printf("Could not get value X (%d)\n", ret);
      return ret;
    }

    ret = sensor_channel_get(dev, SENSOR_CHAN_POS_DY, &y);
    if (ret < 0)
    {
      printf("Could not get value Y (%d)\n", ret);
      return ret;
    }

    printf("X: %f, Y: %f \n",
           sensor_value_to_double(&x),
           sensor_value_to_double(&y));

    k_sleep(K_MSEC(500));
  }
}
