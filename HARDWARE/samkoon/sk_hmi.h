#ifndef __SK_HMI_H
#define __SK_HMI_H

typedef enum
{
    SK_HEAD_VERIFY,
    SK_CRC_VERIFY,
    SK_CATEGORY_VERIFY,
    SK_DATA_01,
    SK_DATA_03,
} SK_STEP;

void sk_init(void);
void sk_proc(void);
#endif
