// ------------------------------------------------------------------
// Copyright (c) 2004-2007 Atheros Corporation.  All rights reserved.
// 
// The software source and binaries included in this development package are
// licensed, not sold. You, or your company, received the package under one
// or more license agreements. The rights granted to you are specifically
// listed in these license agreement(s). All other rights remain with Atheros
// Communications, Inc., its subsidiaries, or the respective owner including
// those listed on the included copyright notices.  Distribution of any
// portion of this package must be in strict compliance with the license
// agreement(s) terms.
// </copyright>
// 
// <summary>
// 	Wifi driver for AR6002
// </summary>
//
// ------------------------------------------------------------------
//===================================================================
// Author(s): ="Atheros"
//===================================================================


#ifndef _VMC_WLAN_REG_REG_H_
#define _VMC_WLAN_REG_REG_H_

#define WLAN_MC_BCAM_VALID_ADDRESS               0x00000000
#define WLAN_MC_BCAM_VALID_OFFSET                0x00000000
#define WLAN_MC_BCAM_VALID_BIT_MSB               0
#define WLAN_MC_BCAM_VALID_BIT_LSB               0
#define WLAN_MC_BCAM_VALID_BIT_MASK              0x00000001
#define WLAN_MC_BCAM_VALID_BIT_GET(x)            (((x) & WLAN_MC_BCAM_VALID_BIT_MASK) >> WLAN_MC_BCAM_VALID_BIT_LSB)
#define WLAN_MC_BCAM_VALID_BIT_SET(x)            (((x) << WLAN_MC_BCAM_VALID_BIT_LSB) & WLAN_MC_BCAM_VALID_BIT_MASK)

#define WLAN_MC_BCAM_COMPARE_ADDRESS             0x00000200
#define WLAN_MC_BCAM_COMPARE_OFFSET              0x00000200
#define WLAN_MC_BCAM_COMPARE_KEY_MSB             19
#define WLAN_MC_BCAM_COMPARE_KEY_LSB             2
#define WLAN_MC_BCAM_COMPARE_KEY_MASK            0x000ffffc
#define WLAN_MC_BCAM_COMPARE_KEY_GET(x)          (((x) & WLAN_MC_BCAM_COMPARE_KEY_MASK) >> WLAN_MC_BCAM_COMPARE_KEY_LSB)
#define WLAN_MC_BCAM_COMPARE_KEY_SET(x)          (((x) << WLAN_MC_BCAM_COMPARE_KEY_LSB) & WLAN_MC_BCAM_COMPARE_KEY_MASK)

#define WLAN_MC_BCAM_TARGET_ADDRESS              0x00000400
#define WLAN_MC_BCAM_TARGET_OFFSET               0x00000400
#define WLAN_MC_BCAM_TARGET_INST_MSB             31
#define WLAN_MC_BCAM_TARGET_INST_LSB             0
#define WLAN_MC_BCAM_TARGET_INST_MASK            0xffffffff
#define WLAN_MC_BCAM_TARGET_INST_GET(x)          (((x) & WLAN_MC_BCAM_TARGET_INST_MASK) >> WLAN_MC_BCAM_TARGET_INST_LSB)
#define WLAN_MC_BCAM_TARGET_INST_SET(x)          (((x) << WLAN_MC_BCAM_TARGET_INST_LSB) & WLAN_MC_BCAM_TARGET_INST_MASK)

#define WLAN_APB_ADDR_ERROR_CONTROL_ADDRESS      0x00000600
#define WLAN_APB_ADDR_ERROR_CONTROL_OFFSET       0x00000600
#define WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_MSB 1
#define WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_LSB 1
#define WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_MASK 0x00000002
#define WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_GET(x) (((x) & WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_MASK) >> WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_LSB)
#define WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_SET(x) (((x) << WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_LSB) & WLAN_APB_ADDR_ERROR_CONTROL_QUAL_ENABLE_MASK)
#define WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_MSB   0
#define WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_LSB   0
#define WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_MASK  0x00000001
#define WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_GET(x) (((x) & WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_MASK) >> WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_LSB)
#define WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_SET(x) (((x) << WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_LSB) & WLAN_APB_ADDR_ERROR_CONTROL_ENABLE_MASK)

#define WLAN_APB_ADDR_ERROR_STATUS_ADDRESS       0x00000604
#define WLAN_APB_ADDR_ERROR_STATUS_OFFSET        0x00000604
#define WLAN_APB_ADDR_ERROR_STATUS_WRITE_MSB     25
#define WLAN_APB_ADDR_ERROR_STATUS_WRITE_LSB     25
#define WLAN_APB_ADDR_ERROR_STATUS_WRITE_MASK    0x02000000
#define WLAN_APB_ADDR_ERROR_STATUS_WRITE_GET(x)  (((x) & WLAN_APB_ADDR_ERROR_STATUS_WRITE_MASK) >> WLAN_APB_ADDR_ERROR_STATUS_WRITE_LSB)
#define WLAN_APB_ADDR_ERROR_STATUS_WRITE_SET(x)  (((x) << WLAN_APB_ADDR_ERROR_STATUS_WRITE_LSB) & WLAN_APB_ADDR_ERROR_STATUS_WRITE_MASK)
#define WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_MSB   24
#define WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_LSB   0
#define WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_MASK  0x01ffffff
#define WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_GET(x) (((x) & WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_MASK) >> WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_LSB)
#define WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_SET(x) (((x) << WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_LSB) & WLAN_APB_ADDR_ERROR_STATUS_ADDRESS_MASK)

#define WLAN_AHB_ADDR_ERROR_CONTROL_ADDRESS      0x00000608
#define WLAN_AHB_ADDR_ERROR_CONTROL_OFFSET       0x00000608
#define WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_MSB   0
#define WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_LSB   0
#define WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_MASK  0x00000001
#define WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_GET(x) (((x) & WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_MASK) >> WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_LSB)
#define WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_SET(x) (((x) << WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_LSB) & WLAN_AHB_ADDR_ERROR_CONTROL_ENABLE_MASK)

#define WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS       0x0000060c
#define WLAN_AHB_ADDR_ERROR_STATUS_OFFSET        0x0000060c
#define WLAN_AHB_ADDR_ERROR_STATUS_MAC_MSB       31
#define WLAN_AHB_ADDR_ERROR_STATUS_MAC_LSB       31
#define WLAN_AHB_ADDR_ERROR_STATUS_MAC_MASK      0x80000000
#define WLAN_AHB_ADDR_ERROR_STATUS_MAC_GET(x)    (((x) & WLAN_AHB_ADDR_ERROR_STATUS_MAC_MASK) >> WLAN_AHB_ADDR_ERROR_STATUS_MAC_LSB)
#define WLAN_AHB_ADDR_ERROR_STATUS_MAC_SET(x)    (((x) << WLAN_AHB_ADDR_ERROR_STATUS_MAC_LSB) & WLAN_AHB_ADDR_ERROR_STATUS_MAC_MASK)
#define WLAN_AHB_ADDR_ERROR_STATUS_MBOX_MSB      30
#define WLAN_AHB_ADDR_ERROR_STATUS_MBOX_LSB      30
#define WLAN_AHB_ADDR_ERROR_STATUS_MBOX_MASK     0x40000000
#define WLAN_AHB_ADDR_ERROR_STATUS_MBOX_GET(x)   (((x) & WLAN_AHB_ADDR_ERROR_STATUS_MBOX_MASK) >> WLAN_AHB_ADDR_ERROR_STATUS_MBOX_LSB)
#define WLAN_AHB_ADDR_ERROR_STATUS_MBOX_SET(x)   (((x) << WLAN_AHB_ADDR_ERROR_STATUS_MBOX_LSB) & WLAN_AHB_ADDR_ERROR_STATUS_MBOX_MASK)
#define WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_MSB   23
#define WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_LSB   0
#define WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_MASK  0x00ffffff
#define WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_GET(x) (((x) & WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_MASK) >> WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_LSB)
#define WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_SET(x) (((x) << WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_LSB) & WLAN_AHB_ADDR_ERROR_STATUS_ADDRESS_MASK)

#define WLAN_BCAM_CONFLICT_ERROR_ADDRESS         0x00000610
#define WLAN_BCAM_CONFLICT_ERROR_OFFSET          0x00000610
#define WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_MSB  1
#define WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_LSB  1
#define WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_MASK 0x00000002
#define WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_GET(x) (((x) & WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_MASK) >> WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_LSB)
#define WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_SET(x) (((x) << WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_LSB) & WLAN_BCAM_CONFLICT_ERROR_IPORT_FLAG_MASK)
#define WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_MSB  0
#define WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_LSB  0
#define WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_MASK 0x00000001
#define WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_GET(x) (((x) & WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_MASK) >> WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_LSB)
#define WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_SET(x) (((x) << WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_LSB) & WLAN_BCAM_CONFLICT_ERROR_DPORT_FLAG_MASK)

#define WLAN_CPU_PERF_CNT_ADDRESS                0x00000614
#define WLAN_CPU_PERF_CNT_OFFSET                 0x00000614
#define WLAN_CPU_PERF_CNT_EN_MSB                 0
#define WLAN_CPU_PERF_CNT_EN_LSB                 0
#define WLAN_CPU_PERF_CNT_EN_MASK                0x00000001
#define WLAN_CPU_PERF_CNT_EN_GET(x)              (((x) & WLAN_CPU_PERF_CNT_EN_MASK) >> WLAN_CPU_PERF_CNT_EN_LSB)
#define WLAN_CPU_PERF_CNT_EN_SET(x)              (((x) << WLAN_CPU_PERF_CNT_EN_LSB) & WLAN_CPU_PERF_CNT_EN_MASK)

#define WLAN_CPU_INST_FETCH_ADDRESS              0x00000618
#define WLAN_CPU_INST_FETCH_OFFSET               0x00000618
#define WLAN_CPU_INST_FETCH_CNT_MSB              31
#define WLAN_CPU_INST_FETCH_CNT_LSB              0
#define WLAN_CPU_INST_FETCH_CNT_MASK             0xffffffff
#define WLAN_CPU_INST_FETCH_CNT_GET(x)           (((x) & WLAN_CPU_INST_FETCH_CNT_MASK) >> WLAN_CPU_INST_FETCH_CNT_LSB)
#define WLAN_CPU_INST_FETCH_CNT_SET(x)           (((x) << WLAN_CPU_INST_FETCH_CNT_LSB) & WLAN_CPU_INST_FETCH_CNT_MASK)

#define WLAN_CPU_DATA_FETCH_ADDRESS              0x0000061c
#define WLAN_CPU_DATA_FETCH_OFFSET               0x0000061c
#define WLAN_CPU_DATA_FETCH_CNT_MSB              31
#define WLAN_CPU_DATA_FETCH_CNT_LSB              0
#define WLAN_CPU_DATA_FETCH_CNT_MASK             0xffffffff
#define WLAN_CPU_DATA_FETCH_CNT_GET(x)           (((x) & WLAN_CPU_DATA_FETCH_CNT_MASK) >> WLAN_CPU_DATA_FETCH_CNT_LSB)
#define WLAN_CPU_DATA_FETCH_CNT_SET(x)           (((x) << WLAN_CPU_DATA_FETCH_CNT_LSB) & WLAN_CPU_DATA_FETCH_CNT_MASK)

#define WLAN_CPU_RAM1_CONFLICT_ADDRESS           0x00000620
#define WLAN_CPU_RAM1_CONFLICT_OFFSET            0x00000620
#define WLAN_CPU_RAM1_CONFLICT_CNT_MSB           11
#define WLAN_CPU_RAM1_CONFLICT_CNT_LSB           0
#define WLAN_CPU_RAM1_CONFLICT_CNT_MASK          0x00000fff
#define WLAN_CPU_RAM1_CONFLICT_CNT_GET(x)        (((x) & WLAN_CPU_RAM1_CONFLICT_CNT_MASK) >> WLAN_CPU_RAM1_CONFLICT_CNT_LSB)
#define WLAN_CPU_RAM1_CONFLICT_CNT_SET(x)        (((x) << WLAN_CPU_RAM1_CONFLICT_CNT_LSB) & WLAN_CPU_RAM1_CONFLICT_CNT_MASK)

#define WLAN_CPU_RAM2_CONFLICT_ADDRESS           0x00000624
#define WLAN_CPU_RAM2_CONFLICT_OFFSET            0x00000624
#define WLAN_CPU_RAM2_CONFLICT_CNT_MSB           11
#define WLAN_CPU_RAM2_CONFLICT_CNT_LSB           0
#define WLAN_CPU_RAM2_CONFLICT_CNT_MASK          0x00000fff
#define WLAN_CPU_RAM2_CONFLICT_CNT_GET(x)        (((x) & WLAN_CPU_RAM2_CONFLICT_CNT_MASK) >> WLAN_CPU_RAM2_CONFLICT_CNT_LSB)
#define WLAN_CPU_RAM2_CONFLICT_CNT_SET(x)        (((x) << WLAN_CPU_RAM2_CONFLICT_CNT_LSB) & WLAN_CPU_RAM2_CONFLICT_CNT_MASK)

#define WLAN_CPU_RAM3_CONFLICT_ADDRESS           0x00000628
#define WLAN_CPU_RAM3_CONFLICT_OFFSET            0x00000628
#define WLAN_CPU_RAM3_CONFLICT_CNT_MSB           11
#define WLAN_CPU_RAM3_CONFLICT_CNT_LSB           0
#define WLAN_CPU_RAM3_CONFLICT_CNT_MASK          0x00000fff
#define WLAN_CPU_RAM3_CONFLICT_CNT_GET(x)        (((x) & WLAN_CPU_RAM3_CONFLICT_CNT_MASK) >> WLAN_CPU_RAM3_CONFLICT_CNT_LSB)
#define WLAN_CPU_RAM3_CONFLICT_CNT_SET(x)        (((x) << WLAN_CPU_RAM3_CONFLICT_CNT_LSB) & WLAN_CPU_RAM3_CONFLICT_CNT_MASK)

#define WLAN_CPU_RAM4_CONFLICT_ADDRESS           0x0000062c
#define WLAN_CPU_RAM4_CONFLICT_OFFSET            0x0000062c
#define WLAN_CPU_RAM4_CONFLICT_CNT_MSB           11
#define WLAN_CPU_RAM4_CONFLICT_CNT_LSB           0
#define WLAN_CPU_RAM4_CONFLICT_CNT_MASK          0x00000fff
#define WLAN_CPU_RAM4_CONFLICT_CNT_GET(x)        (((x) & WLAN_CPU_RAM4_CONFLICT_CNT_MASK) >> WLAN_CPU_RAM4_CONFLICT_CNT_LSB)
#define WLAN_CPU_RAM4_CONFLICT_CNT_SET(x)        (((x) << WLAN_CPU_RAM4_CONFLICT_CNT_LSB) & WLAN_CPU_RAM4_CONFLICT_CNT_MASK)


#ifndef __ASSEMBLER__

typedef struct vmc_wlan_reg_reg_s {
  volatile unsigned int wlan_mc_bcam_valid[128];
  volatile unsigned int wlan_mc_bcam_compare[128];
  volatile unsigned int wlan_mc_bcam_target[128];
  volatile unsigned int wlan_apb_addr_error_control;
  volatile unsigned int wlan_apb_addr_error_status;
  volatile unsigned int wlan_ahb_addr_error_control;
  volatile unsigned int wlan_ahb_addr_error_status;
  volatile unsigned int wlan_bcam_conflict_error;
  volatile unsigned int wlan_cpu_perf_cnt;
  volatile unsigned int wlan_cpu_inst_fetch;
  volatile unsigned int wlan_cpu_data_fetch;
  volatile unsigned int wlan_cpu_ram1_conflict;
  volatile unsigned int wlan_cpu_ram2_conflict;
  volatile unsigned int wlan_cpu_ram3_conflict;
  volatile unsigned int wlan_cpu_ram4_conflict;
} vmc_wlan_reg_reg_t;

#endif /* __ASSEMBLER__ */

#endif /* _VMC_WLAN_REG_H_ */
