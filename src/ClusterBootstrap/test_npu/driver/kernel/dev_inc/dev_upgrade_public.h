/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Description:
 * Author: huawei
 * Create: 2019/6/18
 */
#ifndef _DEV_UPGRADE_PUBLIC_H_
#define _DEV_UPGRADE_PUBLIC_H_

#ifdef CFG_SOC_PLATFORM_CLOUD
#define DEVICE_NUM_MAX 4
#else
#define DEVICE_NUM_MAX 1
#endif

#define BITS_OF_INT       32
#define BITS_OF_SHORT     16
#define BITS_OF_CHAR      8
#define BITS_OF_HALF_CHAR 4

#define DRV_ENABLE        1
#define DRV_DISABLE       0
#define DEVICE_ID_INVALID 0xFF

#define DEV_UPGRADE_STOP_FLAG 0x4b4b4b4b
#define UPGRADE_FILE_SIZE_MAX (64 * 1024 * 1024)

#ifndef OK
#define OK 0
#endif

#ifndef ERROR
#define ERROR (-1)
#endif

#define DEV_MID_UPGRADE 0x01

/* ����ģ�����������
   ͨ�ø�ʽ [15:8]ģ�� | [7:0]��������� */
#define dev_errno_make(mode, errno) \
    ((((unsigned short)(mode)&0xff) << 8) | ((errno)&0xff))

#define upgrade_errno_make(errno) \
    dev_errno_make(DEV_MID_UPGRADE, errno)

/* [0x00 , 0x3f]ͨ�ô����붨�� */
#define ERRNO_NULL_POINT             0x01 /* ��ָ�� */
#define ERRNO_INVALID_PARAMS         0x02 /* ��Ч���� */
#define ERRNO_INAVLID_ADDR           0x03 /* ��Ч��ַ */
#define ERRNO_NONSUPPORT_ITEM        0x04 /* ��֧�ֵ�ѡ�� */
#define ERRNO_CRC                    0x05 /* CRC������� */
#define ERRNO_INVALID_LENGTH         0x06 /* �������ȴ��� */
#define ERRNO_INVALID_INDEX          0x07 /* �Ƿ��������������±�� */
#define ERRNO_MEM_MALLOC             0x08 /* ������ڴ� */
#define ERRNO_MEM_FREE               0x09 /* �ͷſ��ڴ� */
#define ERRNO_NO_INIT                0x0a /* û�г�ʼ�� */
#define ERRNO_REPEAT_INIT            0x0b /* �ظ���ʼ�� */
#define ERRNO_SOURCE_NO              0x0c /* û����Դ */
#define ERRNO_SAME_VERSION           0x0d /* �汾��ͬ */
#define ERRNO_HASH_CHECK             0x0e /* HASHУ����� */
#define ERRNO_HASH                   0x0f /* HASH������� */
#define ERRNO_NOT_ALIGN              0x10 /* �Ƕ������ */
#define ERRNO_NOT_HAVE_VALID_PARTION 0x11 /* PART1���ĸ�����������Чnve */
#define ERRNO_COPY_FROM_USER         0x12 /* copy_from_user���� */
#define ERRNO_COPY_TO_USER           0x13 /* copy_to_user���� */
#define ERRNO_FILE_TYPE              0x14 /* �ļ����Ͳ�ƥ�� */
#define ERRNO_MEM_INIT               0x15 /* �ڴ��ʼ������ */
#define ERRNO_PERMISSION_DENIED      0x16 /* Ȩ�ޱ��ܾ� */
#define ERRNO_VERIFY_OR_REVOCATION   0x17 /* ��֤���ߵ������̴��� */
#define ERRNO_DFM_REGISTER           0x18 /* ��ϻ��ע����� */

/* [0x40 , 0x5f]����ϵͳ������ش����붨�� */
#define ERRNO_TASK_CREATE       0x40 /* ���񴴽� */
#define ERRNO_TASK_INIT         0x41 /* �����ʼ�� */
#define ERRNO_TASK_DELETE       0x42 /* ����ɾ�� */
#define ERRNO_TASK_DELETE_FORCE 0x43 /* ����ǿ��ɾ�� */
#define ERRNO_TASK_SUSPEND      0x44 /* ������� */
#define ERRNO_TASK_RESUME       0x45 /* ����ָ� */
#define ERRNO_TASK_RESTART      0x46 /* �������� */
#define ERRNO_TASK_PRIORITY_SET 0x47 /* �������ȼ����� */
#define ERRNO_TASK_PRIORITY_GET 0x48 /* �������ȼ���ȡ */
#define ERRNO_TASK_LOCK         0x49 /* �������� */
#define ERRNO_TASK_UNLOCK       0x4a /* ������� */
#define ERRNO_TASK_DELAY        0x4b /* �����л� */

/* [0x60 , 0x7f]����ϵͳ�ź�����ش����붨�� */
#define ERRNO_SEM_GIVE         0x60 /* �ź��� �ͷ� */
#define ERRNO_SEM_TRY          0x61 /* �ź��� ���Ի�ȡ */
#define ERRNO_SEM_TAKE         0x62 /* �ź��� ��ȡ */
#define ERRNO_SEM_FLUSH        0x63 /* �ź��� ������������ */
#define ERRNO_SEM_DELETE       0x64 /* �ź��� ɾ�� */
#define ERRNO_SEM_B_CREATE     0x65 /* �����������ź��� */
#define ERRNO_SEM_C_CREATE     0x66 /* ���������ź��� */
#define ERRNO_SEM_M_CREATE     0x67 /* ���������ź��� */
#define ERRNO_SEM_M_GIVE_FORCE 0x68 /* �ͷŻ����ź��� */
#define ERRNO_SEM_B_SM_CREATE  0x69 /* ���������ڴ�������ź��� */
#define ERRNO_SEM_C_SM_CREATE  0x6a /* ���������ڴ�����ź��� */
#define ERRNO_SEM_SHOW         0x6b /* �ź��� ��ʾ */

/* [0x80 , 0x9f] �ļ�ϵͳ������ ͨ�ô����붨�� */
#define ERRNO_FS_NOT_FOUND 0x80 /* �ļ�û���ҵ� */
#define ERRNO_FS_WRITE     0x81 /* �ļ�д��ʧ�� */
#define ERRNO_FS_READ      0x82 /* �ļ���ȡʧ�� */
#define ERRNO_FS_CONTENT   0x83 /* ������Ч */
#define ERRNO_FS_FILEID    0x84 /* �ļ�ID��Ч */
#define ERRNO_FS_MKDIR     0x85 /* �����ļ���ʧ�� */
#define ERRNO_FS_OPEN      0x86 /* ��ʧ�� */
#define ERRNO_FS_CLOSE     0x87 /* �ر�ʧ�� */
#define ERRNO_FS_SEEK      0x88 /* �ر�ʧ�� */
#define ERRNO_FS_ERASE     0x89 /* ����ʧ�� */
#define ERRNO_FS_DELETE    0x90 /* ɾ���ļ�ʧ�� */
#define ERRNO_FS_REALPATH  0x91 /* realpathʧ�� */
#define ERRNO_FS_IOCTL     0x92 /* ioctlʧ�� */

// DSMI_COMPONENT_TYPE ö�������޸�ʱ��Ҫ�����ͷ�ļ��е�ͬһ���������
typedef enum {
    DSMI_COMPONENT_TYPE_NVE,
    DSMI_COMPONENT_TYPE_XLOADER,
    DSMI_COMPONENT_TYPE_M3FW,
    DSMI_COMPONENT_TYPE_UEFI,
    DSMI_COMPONENT_TYPE_TEE,
    DSMI_COMPONENT_TYPE_KERNEL,
    DSMI_COMPONENT_TYPE_DTB,
    DSMI_COMPONENT_TYPE_ROOTFS,
    DSMI_COMPONENT_TYPE_IMU,
    DSMI_COMPONENT_TYPE_IMP,
    DSMI_COMPONENT_TYPE_AICPU,
    DSMI_COMPONENT_TYPE_HBOOT1_A,
    DSMI_COMPONENT_TYPE_HBOOT1_B,
    DSMI_COMPONENT_TYPE_HBOOT2,
    DSMI_COMPONENT_TYPE_DDR,
    DSMI_COMPONENT_TYPE_LP,
    DSMI_COMPONENT_TYPE_HSM,
    DSMI_COMPONENT_TYPE_SAFETY_ISLAND,
    DSMI_COMPONENT_TYPE_RAWData,
    DSMI_COMPONENT_TYPE_SysDrv,
    DSMI_COMPONENT_TYPE_ADSApp,
    DSMI_COMPONENT_TYPE_ComIsolator,
    DSMI_COMPONENT_TYPE_Cluster,
    DSMI_COMPONENT_TYPE_Customized,
    DSMI_COMPONENT_TYPE_MAX,
    UPGRADE_ALL_IMAGE_COMPONENT = 0xFFFFFFFD,
    UPGRADE_ALL_FIRMWARE_COMPONENT = 0xFFFFFFFE,
    UPGRADE_ALL_COMPONENT = 0xFFFFFFFF
} DSMI_COMPONENT_TYPE;

typedef enum {
    INDEX_0,
    INDEX_1,
    INDEX_2,
    INDEX_3
} COMMON_INDEX;


#define DAVINCI_LENGTH_FILE_PATH 256

/* Use 'C' as magic number */
#define UPGRADE_CTL_IOC_MAGIC      'C'
#define UPGRADE_FIRMWARE_START     _IOR(UPGRADE_CTL_IOC_MAGIC, 1, int)
#define UPGRADE_READ_SCHEDULE_CTL  _IOR(UPGRADE_CTL_IOC_MAGIC, 2, int)
#define UPGRADE_GET_FIREWARE_VER   _IOR(UPGRADE_CTL_IOC_MAGIC, 3, int)
#define UPGRADE_GET_COMPONENT_LIST _IOR(UPGRADE_CTL_IOC_MAGIC, 4, int)
#define UPGRADE_SYNC_IMAGE_COPY    _IOR(UPGRADE_CTL_IOC_MAGIC, 5, int)
#define UPGRADE_FIRMWARE_STOP      _IOR(UPGRADE_CTL_IOC_MAGIC, 6, int)
#define UPGRADE_CLR_LOCALCFG       _IOR(UPGRADE_CTL_IOC_MAGIC, 7, int)
#define UPGRADE_SEC_REVOCATION     _IOR(UPGRADE_CTL_IOC_MAGIC, 8, int)
#define UPGRADE_SYNC_LOCAL_COMP    _IOR(UPGRADE_CTL_IOC_MAGIC, 9, int)

#define HISFC_PART_NUM_MAX 128

/* RootBubK related */
#define FIRMWARE_HEAD_LEN     0x477
#define ROOT_BUBK_LEN_OFFSET  0x58
#define ROOT_PUBK_OFFSET      0x5C
#define ROOT_PUBK_LEN_VAL     512
#define ROOT_PUBK_TOTAL_SIZE  1024
#define REVOCATE_FILE_LEN     544

#ifdef CFG_SOC_PLATFORM_MDC_V51
#define MAX_MDC_PKT_NUM       6
#define MAX_NAME_LEN          32
#define MAX_PATH_LEN          64
#define MAX_TYPE_LEN          6
#define SUB_FILE_MAX_PATH_LEN (MAX_NAME_LEN + DAVINCI_LENGTH_FILE_PATH)

/**
 * struct mdc_file_info - MDC upgraded component information
 * @path: upgraded file full path
 * @size: upgraded file size
 * @type: file system format. such as ext4/f2fs/nat
 *
 * When MDC upgrading, read mdc configuration and fill in this struct.
 */
struct mdc_file_info {
    char   path[MAX_PATH_LEN];    /*file path in mdc package*/
    unsigned int    size;         /*factually size of file*/
    char   type[MAX_TYPE_LEN];
};

/**
* struct mdc_file_storage - MDC UFS storage information
* @start: Start position of the file to be burnt on the device
* @len: Actual size of the partition
* @sign_ltart: Location of the file signature information in the file
* @sign_len: Length of the file signature information
* @back: Start position of the backup file on the storage device.
*        The value is 0 if there is no backup file.
* @lun: Main logical partition ID saved in the file
* @back_lun: Number of the standby logical partition for which the file is saved
*
* During the MDC upgrade, the upgrade package of each component needs to be
* saved to the UFS. This structure stores the component storage information,
* such as the logical unit number, storage offset, and occupied space.
*/
struct mdc_file_storage {
    unsigned int    start;
    unsigned int    len;
    unsigned int    sign_ltart;
    unsigned int    sign_len;
    unsigned int    back;
    unsigned int    lun;
    unsigned int    back_lun;
    unsigned int    partition;
};

struct  mdc_package {
    char   name[MAX_NAME_LEN];  /* file name: from mdcpack.xml */
    char   file_name[SUB_FILE_MAX_PATH_LEN];
    struct mdc_file_info file_info;
    struct mdc_file_storage storage;
};
typedef struct mdc_package mdc_package_t;

typedef struct tag_upgrade_sub_file_st {
    unsigned int sub_file_count;
    mdc_package_t *sub_file_info[MAX_MDC_PKT_NUM];
} upgrade_sub_file;

struct component_file_info {
    unsigned int component_type;
    unsigned int file_size;
    unsigned char *file_content;
    upgrade_sub_file sub_pkt;
};

typedef struct tag_upgrade_ufs_component_info_st {
    unsigned int component_type;
    unsigned int valid;       // 0:invalid 1:valid
    unsigned int area_flag;   // 0:single 1:double
    unsigned int cur_flag;    // 0:master 1:backup
    char component_name[MAX_NAME_LEN];
    upgrade_sub_file sub_pkt_m;
    upgrade_sub_file sub_pkt_b;
} upgrade_ufs_component_info;

typedef struct tag_upgrade_ufs_single_area_info_st {
    unsigned int component_type;
    unsigned int valid;       // 0:invalid 1:valid
    unsigned int area_flag;   // 0:single 1:double
    unsigned int master_flag; // 0:master 1:backup
    unsigned int cur_flag;    // 0:master 1:backup
    upgrade_sub_file sub_pkt;
} upgrade_ufs_single_area_info;

struct upgrade_ufs_local_component_start_in {
    int dev_id;
    unsigned int component_cnt;
    upgrade_ufs_single_area_info component_info[DSMI_COMPONENT_TYPE_MAX];
};

struct upgrade_ufs_local_component_start_out {
    int result;
};

#else
struct component_file_info {
    unsigned int component_type;
    unsigned int file_size;
    unsigned char *file_content;
};
#endif

struct upgrade_start_in {
    int dev_id;
    unsigned int count;
    struct component_file_info file_list[DSMI_COMPONENT_TYPE_MAX];
};

struct upgrade_start_out {
    int result;
};

struct upgrade_read_schedule_in {
    int dev_id;
};

struct upgrade_read_schedule_out {
    unsigned int schedule;
};

struct upgrade_get_component_list_in {
    int dev_id;
};

struct upgrade_get_component_list_out {
    unsigned int bitmap;
};

struct upgrade_sync_image_in {
    int dev_id;
};

struct upgrade_sync_image_out {
    int result;
};

struct upgrade_stop_in {
    int dev_id;
};

struct upgrade_stop_out {
    int result;
};

struct upgrade_clr_localcfg_in {
    int dev_id;
};

struct upgrade_clr_localcfg_out {
    int result;
};

struct upgrade_get_version_in {
    int dev_id;
    unsigned int component_type;
    unsigned int buffLen;
    void *outBuff;
};

struct upgrade_get_version_out {
    int result;
};

struct upgrade_revocation_in {
    int dev_id;
    unsigned int file_size;
    void *file_data;
};

struct upgrade_revocation_out {
    int result;
};

struct upgrade_ioctl_msg {
    int dev_id;
    signed int in_size;
    signed int out_size;
    void *in;
    void *out;
};

#endif /* _DEV_UPGRADE_PUBLIC_H_ */
