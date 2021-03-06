#ifndef __X_DEFINE_IRQ
#define __X_DEFINE_IRQ

X_DEFINE_IRQ(IRQOUT_BIT0_ID,32,L,level)
X_DEFINE_IRQ(IRQOUT_BIT1_ID,33,L,level)
X_DEFINE_IRQ(IRQOUT_BIT2_ID,34,L,level)
X_DEFINE_IRQ(IRQOUT_BIT3_ID,35,L,level)
X_DEFINE_IRQ(PMUIRQ_BIT0_ID,40,L,level)
X_DEFINE_IRQ(PMUIRQ_BIT1_ID,41,L,level)
X_DEFINE_IRQ(PMUIRQ_BIT2_ID,42,L,level)
X_DEFINE_IRQ(PMUIRQ_BIT3_ID,43,L,level)
X_DEFINE_IRQ(CNTHPIRQ_BIT0_ID,48,L,level)
X_DEFINE_IRQ(CNTHPIRQ_BIT1_ID,49,L,level)
X_DEFINE_IRQ(CNTHPIRQ_BIT2_ID,50,L,level)
X_DEFINE_IRQ(CNTHPIRQ_BIT3_ID,51,L,level)
X_DEFINE_IRQ(CNTVIRQ_BIT0_ID,56,L,level)
X_DEFINE_IRQ(CNTVIRQ_BIT1_ID,57,L,level)
X_DEFINE_IRQ(CNTVIRQ_BIT2_ID,58,L,level)
X_DEFINE_IRQ(CNTVIRQ_BIT3_ID,59,L,level)
X_DEFINE_IRQ(CNTPSIRQ_BIT0_ID,64,H,level)
X_DEFINE_IRQ(CNTPSIRQ_BIT1_ID,65,H,level)
X_DEFINE_IRQ(CNTPSIRQ_BIT2_ID,66,H,level)
X_DEFINE_IRQ(CNTPSIRQ_BIT3_ID,67,H,level)
X_DEFINE_IRQ(CNTPNSIRQ_BIT0_ID,72,H,level)
X_DEFINE_IRQ(CNTPNSIRQ_BIT1_ID,73,H,level)
X_DEFINE_IRQ(CNTPNSIRQ_BIT2_ID,74,H,level)
X_DEFINE_IRQ(CNTPNSIRQ_BIT3_ID,75,H,level)
X_DEFINE_IRQ(AXIERRIRQ_BIT0_ID,80,H,level)
X_DEFINE_IRQ(MP0_CTIIRQ_SYNC_BIT0_ID,82,H,level)
X_DEFINE_IRQ(MP0_CTIIRQ_SYNC_BIT1_ID,83,H,level)
X_DEFINE_IRQ(MP0_CTIIRQ_SYNC_BIT2_ID,84,H,level)
X_DEFINE_IRQ(MP0_CTIIRQ_SYNC_BIT3_ID,85,H,level)
X_DEFINE_IRQ(CCI_EVNTCNTOVERFLOW_BIT0_ID,90,H,level)
X_DEFINE_IRQ(CCI_EVNTCNTOVERFLOW_BIT1_ID,91,H,level)
X_DEFINE_IRQ(CCI_EVNTCNTOVERFLOW_BIT2_ID,92,H,level)
X_DEFINE_IRQ(CCI_EVNTCNTOVERFLOW_BIT3_ID,93,H,level)
X_DEFINE_IRQ(CCI_EVNTCNTOVERFLOW_BIT4_ID,94,H,level)
X_DEFINE_IRQ(CCI_ERRORIRQ_BIT0_ID,95,H,level)
X_DEFINE_IRQ(MCU_XGPT_IRQ_BIT0_ID,96,H,level)
X_DEFINE_IRQ(MCU_XGPT_IRQ_BIT1_ID,97,H,level)
X_DEFINE_IRQ(MCU_XGPT_IRQ_BIT2_ID,98,H,level)
X_DEFINE_IRQ(MCU_XGPT_IRQ_BIT3_ID,99,H,level)
X_DEFINE_IRQ(MCU_XGPT_IRQ_BIT4_ID,100,H,level)
X_DEFINE_IRQ(MCU_XGPT_IRQ_BIT5_ID,101,H,level)
X_DEFINE_IRQ(MCU_XGPT_IRQ_BIT6_ID,102,H,level)
X_DEFINE_IRQ(MCU_XGPT_IRQ_BIT7_ID,103,H,level)
X_DEFINE_IRQ(USB_MCU_IRQ_BIT0_ID,104,L,level)
X_DEFINE_IRQ(TS_IRQ_BIT_ID,106,L,edge)
X_DEFINE_IRQ(TS_BATCH_IRQ_BIT_ID,107,L,edge)
X_DEFINE_IRQ(LOWBATTERY_IRQ_BIT_ID,108,L,edge)
X_DEFINE_IRQ(PWM_IRQ_BIT_ID,109,L,level)
X_DEFINE_IRQ(THERM_CTRL_IRQ_BIT_ID,110,L,level)
X_DEFINE_IRQ(MSDC0_IRQ_BIT_ID,111,L,level)
X_DEFINE_IRQ(MSDC1_IRQ_BIT_ID,112,L,level)
X_DEFINE_IRQ(MSDC2_IRQ_BIT_ID,113,L,level)
X_DEFINE_IRQ(MSDC3_IRQ_BIT_ID,114,L,level)
X_DEFINE_IRQ(I2C0_IRQ_BIT_ID,116,L,level)
X_DEFINE_IRQ(I2C1_IRQ_BIT_ID,117,L,level)
X_DEFINE_IRQ(I2C2_IRQ_BIT_ID,118,L,level)
X_DEFINE_IRQ(I2C3_IRQ_BIT_ID,119,L,level)
X_DEFINE_IRQ(BTIF_IRQ_BIT_ID,122,L,edge)
X_DEFINE_IRQ(UART0_IRQ_BIT_ID,123,L,level)
X_DEFINE_IRQ(UART1_IRQ_BIT_ID,124,L,level)
X_DEFINE_IRQ(UART2_IRQ_BIT_ID,125,L,level)
X_DEFINE_IRQ(UART3_IRQ_BIT_ID,126,L,level)
X_DEFINE_IRQ(UART4_IRQ_BIT_ID,127,L,level)
X_DEFINE_IRQ(AP_DMA_HIF0_IRQ_BIT_ID,129,L,level)
X_DEFINE_IRQ(AP_DMA_IRDA_IRQ_BIT_ID,130,L,level)
X_DEFINE_IRQ(AP_DMA_I2C0_IRQ_BIT_ID,131,L,level)
X_DEFINE_IRQ(AP_DMA_I2C1_IRQ_BIT_ID,132,L,level)
X_DEFINE_IRQ(AP_DMA_I2C2_IRQ_BIT_ID,133,L,level)
X_DEFINE_IRQ(AP_DMA_I2C3_IRQ_BIT_ID,134,L,level)
X_DEFINE_IRQ(AP_DMA_UART0_TX_IRQ_BIT_ID,135,L,level)
X_DEFINE_IRQ(AP_DMA_UART0_RX_IRQ_BIT_ID,136,L,level)
X_DEFINE_IRQ(AP_DMA_UART1_TX_IRQ_BIT_ID,137,L,level)
X_DEFINE_IRQ(AP_DMA_UART1_RX_IRQ_BIT_ID,138,L,level)
X_DEFINE_IRQ(AP_DMA_UART2_TX_IRQ_BIT_ID,139,L,level)
X_DEFINE_IRQ(AP_DMA_UART2_RX_IRQ_BIT_ID,140,L,level)
X_DEFINE_IRQ(AP_DMA_UART3_TX_IRQ_BIT_ID,141,L,level)
X_DEFINE_IRQ(AP_DMA_UART3_RX_IRQ_BIT_ID,142,L,level)
X_DEFINE_IRQ(AP_DMA_UART4_TX_IRQ_BIT_ID,143,L,level)
X_DEFINE_IRQ(AP_DMA_UART4_RX_IRQ_BIT_ID,144,L,level)
X_DEFINE_IRQ(AP_DMA_BTIF_TX_IRQ_BIT_ID,145,L,level)
X_DEFINE_IRQ(AP_DMA_BTIF_RX_IRQ_BIT_ID,146,L,level)
X_DEFINE_IRQ(DISPPWM_IRQ_BIT_ID,149,L,level)
X_DEFINE_IRQ(SPI0_IRQ_BIT_ID,150,L,level)
X_DEFINE_IRQ(MSDC0_WAKEUP_PS_IRQ_BIT_ID,151,H,edge)
X_DEFINE_IRQ(MSDC1_WAKEUP_PS_IRQ_BIT_ID,152,H,edge)
X_DEFINE_IRQ(MSDC2_WAKEUP_PS_IRQ_BIT_ID,153,H,edge)
X_DEFINE_IRQ(MSDC3_WAKEUP_PS_IRQ_BIT_ID,154,H,edge)
X_DEFINE_IRQ(IRDA_IRQ_BIT_ID,155,H,level)
X_DEFINE_IRQ(IRTX_IRQ_BIT_ID,156,H,level)
X_DEFINE_IRQ(PTP_FSM_IRQ_BIT_ID,157,L,level)
X_DEFINE_IRQ(CONN2AP_BTIF_WAKEUP_OUT_BIT_ID,158,L,edge)
X_DEFINE_IRQ(WDT_IRQ_BIT_ID,160,L,edge)
X_DEFINE_IRQ(DCC_APARM_IRQ_BIT_ID,164,L,level)
X_DEFINE_IRQ(APARM_DOMAIN_IRQ_BIT_ID,166,L,level)
X_DEFINE_IRQ(APARM_DECERR_IRQ_BIT_ID,167,L,level)
X_DEFINE_IRQ(DOMAIN_ABORT_IRQ_BIT_ID,168,H,level)
X_DEFINE_IRQ(BUS_DBG_TRACKER_IRQ_BIT0_ID,169,L,level)
X_DEFINE_IRQ(CCIF1_AP_IRQ_BIT_ID,171,H,level)
X_DEFINE_IRQ(CCIF0_AP_IRQ_BIT_ID,172,H,level)
X_DEFINE_IRQ(TRNG_IRQ_BIT_ID,173,L,level)
X_DEFINE_IRQ(AFE_MCU_IRQ_BIT_ID,176,L,level)
X_DEFINE_IRQ(CLDMA_AP_IRQ_BIT_ID,177,H,level)
X_DEFINE_IRQ(MMU_IRQ_BIT_ID,178,L,level)
X_DEFINE_IRQ(MMU_SEC_IRQ_BIT_ID,179,L,level)
X_DEFINE_IRQ(GCE_SECURE_IRQ_BIT_ID,180,L,level)
X_DEFINE_IRQ(REFRESH_RATE_IRQ_BIT_ID,181,L,edge)
X_DEFINE_IRQ(GCPU_IRQ_BIT_ID,182,L,level)
X_DEFINE_IRQ(GCE_IRQ_BIT_ID,183,L,level)
X_DEFINE_IRQ(CQ_DMA_IRQ_B_ID,183,L,level)
X_DEFINE_IRQ(APXGPT_IRQ_BIT_ID,184,L,level)
X_DEFINE_IRQ(EINT_IRQ_BIT0_ID,185,H,level)
X_DEFINE_IRQ(EINT_EVENT_IRQ_BIT_ID,186,L,level)
X_DEFINE_IRQ(EINT_DIRECT_IRQ_BIT0_ID,187,H,level)
X_DEFINE_IRQ(EINT_DIRECT_IRQ_BIT1_ID,188,H,level)
X_DEFINE_IRQ(EINT_DIRECT_IRQ_BIT2_ID,189,H,level)
X_DEFINE_IRQ(EINT_DIRECT_IRQ_BIT3_ID,190,H,level)
X_DEFINE_IRQ(PMIC_WRAP_ERR_IRQ_BIT_ID,195,H,level)
X_DEFINE_IRQ(KP_IRQ_BIT_ID,196,L,edge)
X_DEFINE_IRQ(SLEEP_IRQ_BIT0_ID,197,L,level)
X_DEFINE_IRQ(SLEEP_IRQ_BIT1_ID,198,L,level)
X_DEFINE_IRQ(SLEEP_IRQ_BIT2_ID,199,L,level)
X_DEFINE_IRQ(SLEEP_IRQ_BIT3_ID,200,L,level)
X_DEFINE_IRQ(SEJ_APXGPT_IRQ_BIT_ID,205,L,level)
X_DEFINE_IRQ(SEJ_WDT_IRQ_BIT_ID,206,L,level)
X_DEFINE_IRQ(SMI_LARB0_IRQ_BIT_ID,208,L,level)
X_DEFINE_IRQ(SMI_LARB1_IRQ_BIT_ID,209,L,level)
X_DEFINE_IRQ(SMI_LARB2_IRQ_BIT_ID,210,L,level)
X_DEFINE_IRQ(VDEC_IRQ_BIT_ID,211,L,level)
X_DEFINE_IRQ(VENC_IRQ_BIT_ID,212,L,level)
X_DEFINE_IRQ(JPGENC_IRQ_BIT_ID,213,L,level)
X_DEFINE_IRQ(SENINF_IRQ_BIT_ID,214,L,level)
X_DEFINE_IRQ(CAM0_IRQ_BIT_ID,215,L,level)
X_DEFINE_IRQ(CAM1_IRQ_BIT_ID,216,L,level)
X_DEFINE_IRQ(CAM2_IRQ_BIT_ID,217,L,level)
X_DEFINE_IRQ(DISP_MUTEX_IRQ_BIT_ID,218,L,level)
X_DEFINE_IRQ(MDP_RDMA_IRQ_BIT_ID,219,L,level)
X_DEFINE_IRQ(MDP_RSZ0_IRQ_BIT_ID,220,L,level)
X_DEFINE_IRQ(MDP_RSZ1_IRQ_BIT_ID,221,L,level)
X_DEFINE_IRQ(MDP_TDSHP_IRQ_BIT_ID,222,L,level)
X_DEFINE_IRQ(MDP_WDMA_IRQ_BIT_ID,223,L,level)
X_DEFINE_IRQ(MDP_WROT_IRQ_BIT_ID,224,L,level)
X_DEFINE_IRQ(DISP_OVL0_IRQ_BIT_ID,225,L,level)
X_DEFINE_IRQ(DISP_RDMA0_IRQ_BIT_ID,226,L,level)
X_DEFINE_IRQ(DISP_RDMA1_IRQ_BIT_ID,227,L,level)
X_DEFINE_IRQ(DISP_WDMA0_IRQ_BIT_ID,228,L,level)
X_DEFINE_IRQ(DISP_COLOR_IRQ_BIT_ID,229,L,level)
X_DEFINE_IRQ(DISP_CCORR_IRQ_BIT_ID,230,L,level)
X_DEFINE_IRQ(DISP_AAL_IRQ_BIT_ID,231,L,level)
X_DEFINE_IRQ(DISP_GAMMA_IRQ_B_ID,232,L,level)
X_DEFINE_IRQ(DISP_DITHER_IRQ_B_ID,233,L,level)
X_DEFINE_IRQ(SMI_LARB3_IRQ_BIT_ID,234,L,level)
X_DEFINE_IRQ(DSI0_IRQ_BIT_ID,235,L,level)
X_DEFINE_IRQ(DPI0_IRQ_B_ID,236,L,level)
X_DEFINE_IRQ(MMSYS_TOP_IRQ_B_ID,237,L,level)
X_DEFINE_IRQ(CAMSV_IRQ_BIT_ID,238,L,level)
X_DEFINE_IRQ(CAMSV_IRQ1_BIT_ID,239,L,level)
X_DEFINE_IRQ(FDVT_IRQ_BIT_ID,240,L,level)
X_DEFINE_IRQ(JPGDEC_IRQ_BIT_ID,241,L,level)
X_DEFINE_IRQ(MFG_IRQ_BIT0_ID,242,L,level)
X_DEFINE_IRQ(MFG_IRQ_BIT1_ID,243,L,level)
X_DEFINE_IRQ(MFG_IRQ_BIT2_ID,244,L,level)
X_DEFINE_IRQ(MD_WDT_IRQ_BIT_ID,253,L,edge)
X_DEFINE_IRQ(CONN_WDT_IRQ_BIT_ID,257,L,edge)
X_DEFINE_IRQ(WF_HIF_IRQ_BIT_ID,258,L,level)
X_DEFINE_IRQ(CONN2AP_BTIF_WAKEPUP_OUT_BIT_ID,259,L,level)
X_DEFINE_IRQ(BT_CVSD_IRQ_BIT_ID,260,L,level)
X_DEFINE_IRQ(C2K_WDT_IRQ_BIT_ID,261,L,edge)
X_DEFINE_IRQ(C2K_SDIO_HOST_FN1_INT_BIT_ID,262,L,level)
X_DEFINE_IRQ(CIRQ_EVENT_BIT_ID,263,L,level)

#endif
