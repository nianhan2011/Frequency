#ifndef __VDF_710_H
#define __VDF_710_H

typedef enum
{
    VDF_HEAD_VERIFY,
    VDF_CRC_VERIFY,
    VDF_CATEGORY_VERIFY,
    VDF_DATA_01,
    VDF_DATA_03,
} VDF_STEP;

extern __IO uint8_t v_data[20];

void vdf_init(void);
void vdf_send_proc(void);
void vdf_receive_proc(void);
#endif
