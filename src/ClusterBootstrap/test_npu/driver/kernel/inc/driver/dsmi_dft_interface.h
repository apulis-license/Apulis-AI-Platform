/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Description: This file contains dsmi_dft_interface Info.
 * Author: huawei
 * Create: 2017-10-15
 */

#ifndef __DSMI_DFT_INTERFACE_H__
#define __DSMI_DFT_INTERFACE_H__

#include "dsmi_common_interface.h"

int dsmi_dft_start_peripheral_test(int device_index, const char *test_lib, int test_item, int *estimate_time);
int dsmi_dft_get_soc_test_result(int device_index, int *schedule, int *result_list, int *count);
int dsmi_dft_start_soc_test(int device_index, int test_item, int *estimate_time);
int dsmi_dft_clear_log(int device_id);
int dsmi_dft_get_peripheral_test_result(int device_index, int *schedule, int *result_list, int *count);
int dsmi_dft_set_aging_flag(int device_index, int state);
int dsmi_dft_set_aging_time(int device_index, int time);
int dsmi_dft_get_aging_flag(int device_index, int *state);
int dsmi_dft_get_aging_time(int device_index, int *time);
int dsmi_dft_get_aging_result(int device_index, int *result);

int dsmi_dft_set_dft_flag(int device_index, int enable_flag);
int dsmi_dft_get_dft_flag(int device_index, int *enable_flag);

#define DFT_TEST_ALL_MODULE 0XFFFFFFFFFFFFFFFF
#define DFT_TEST_ITEM_MAX_NUM 64

#pragma pack(1)

struct stress_test_start_info {
    unsigned long long module_id_map;  // ÿ��ģ���Ӧ1λ

    unsigned long long test_time_second;  // ����ʱ�䣬��λΪ��
};

#pragma pack()

// ÿ��ģ�����״̬ ����0ʧ�� ���Ǵ�����
typedef enum {
    MODULE_TEST_SUCCESS = 0,  // ���Գɹ�
    MODULE_TEST_ING = -1,     // ���ڲ���
} MODULE_TEST_STATUS;

// �ܵĲ��Խ��
typedef enum {
    DFT_GLOBAL_TEST_SUCCESS = 0,  // ���Գɹ�
    DFT_GLOBAL_TEST_ING = -1,     // ������
    DFT_GLOBAL_TEST_FAIL = -2     // ����ʧ��
} DFT_TEST_GLOBAL_STATUS;

#pragma pack(1)

struct stress_test_result {
    int status;                              // �ܲ���״̬
    int result_list[DFT_TEST_ITEM_MAX_NUM];  // ÿ���������״̬
    int support_num;                         // ֧�ֵĲ���ģ������
};

#pragma pack()

struct stress_test_proc_info {
    unsigned char para[0];  //   ��ǰ��������չ��
};

#define DFT_PMU_TYPE_MAX (2)
#define DFT_PMU_TYPE_ADD (1)
#define DFT_PMU_DIE_OFFSET (16)

// ��������
int dft_stress_test_start(int device_id, const struct stress_test_start_info *test_info);
// ֹͣ����
int dft_stress_test_stop(int device_id);
// ��ȡ���Խ��
int dft_stress_get_result(int device_id, struct stress_test_result *test_result);
// DFT firmware load interface
int dsmi_dft_fw_load(int device_index, int fw_type, const char *fw_name);
int dsmi_write_efuse(int device_id, unsigned char obj, unsigned int dest_bit, unsigned int dest_size,
                     const unsigned int *src);
int dsmi_burn_efuse(int device_id, unsigned char obj);
int dsmi_efuse_flash_power(int device_id, unsigned char onoff);
int dsmi_efuse_data_check(int device_id, unsigned char obj, unsigned int dest_bit, unsigned int dest_size,
                          const unsigned int *input, unsigned int *out_flag);
int dsmi_dft_get_pmu_die(int device_id, unsigned int pmu_type, struct dsmi_soc_die_stru *pdevice_die);
int dsmi_get_pmu_voltage(int device_id, unsigned char pmu_type, unsigned char channel, unsigned int *volt_mv);
int dsmi_dft_set_elable(int device_id, int item_type, const char *elable_data, int len);
int dsmi_dft_clear_elable(int device_id, int item_type);
int dsmi_debug_send_data(int deviceid, int trg_type, const char *inbuf, int size_in, char *outbuf, int *size_out);
int dsmi_get_cntpct(int deviceid, struct dsmi_cntpct_stru *cntpct_data);

/*
����ԭ��	dsmi_upgrade_start_spec(int device_id, DSMI_COMPONENT_TYPE  component_type, char *file_name)
��������	�����豸�̼�����֧��BOOTROM
����˵��	int device_id���豸id
			DSMI_COMPONENT_TYPE  component_type���̼�����
			char *file_name�������ļ�·��
���˵��	��
����ֵ˵��	0   �ɹ�
			��0 ʧ��
ʹ��˵��	֧������һ���豸��һ���̼�������һ���豸�����п������Ĺ̼� (�ڶ�����������Ϊ0xFFFFFFFF)
			��֧�����������豸�����ϲ��װ�ӿ�ʵ��
ע������	��
ʹ�ó���	�ڲ��ӿڣ����ṩ����������ã��������򼰲�Ʒ��ֹʹ��
*/
int dsmi_upgrade_start_spec(int device_id, DSMI_COMPONENT_TYPE component_type, const char *file_name);

/*
����ԭ��	dsmi_upgrade_get_component_static_version_spec(int device_id, 
            DSMI_COMPONENT_TYPE component_type, unsigned char* version_str, int *len)
��������	��ȡ�̼��汾�ţ���֧��BOOTROM
����˵��	int device_id���豸id
			DSMI_COMPONENT_TYPE  component_type���̼�����
			unsigned char* version_str���û�����Ŀռ� ��ŷ��صĹ̼��汾��
			int *len �û�����Ŀռ� ���ڴ�Ű汾����Ч�ַ�����
���˵��	��
����ֵ˵��	0   �ɹ�
			��0 ʧ��
ʹ��˵��	��
ע������	�����������汾�ŵ�ַ �����û����룬��ģ��ֻ������зǿ�У�飬��С���û���֤
ʹ�ó���	�ڲ��ӿڣ����ṩ����������ã��������򼰲�Ʒ��ֹʹ��
*/
int dsmi_upgrade_get_component_static_version_spec(int device_id, DSMI_COMPONENT_TYPE component_type,
                                                   unsigned char *version_str, int *len);

/*
����ԭ��	dsmi_get_component_list_spec(int device_id, unsigned int *component_num, DSMI_COMPONENT_TYPE* component_table)
��������	��ȡ���������Ĺ̼��б���֧��BOOTROM
����˵��	int device_id���豸id
			unsigned int *component_num �û�����Ŀռ䣬���ڴ�ŷ��صĹ̼�����
			DSMI_COMPONENT_TYPE* component_table �û�����Ŀռ� ���ڴ�ŷ��صĹ̼��б�
���˵��	��
����ֵ˵��	0   �ɹ�
			��0 ʧ��
ʹ��˵��	��
ע������    ��
ʹ�ó���	�ڲ��ӿڣ����ṩ����������ã��������򼰲�Ʒ��ֹʹ��
*/
int dsmi_get_component_list_spec(int device_id, unsigned int *component_num, DSMI_COMPONENT_TYPE *component_table);

#endif
