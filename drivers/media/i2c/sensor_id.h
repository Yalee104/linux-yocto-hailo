#ifndef _SENSOR_ID_H_
#define _SENSOR_ID_H_

#define GENERIC_SENSOR_ID_REG 0x3015

enum sensor_id {
    SENSOR_ID_IMX334 = 0x00,
    SENSOR_ID_IMX675 = 0x04,
    SENSOR_ID_IMX678 = 0x02,
};

#endif
