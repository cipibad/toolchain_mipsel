/*
 * Automatically generated C config: don't edit
 * Linux kernel version: 2.6.12
 * Wed Sep  3 13:23:50 2008
 */
#define AUTOCONF_INCLUDED
#define CONFIG_MIPS 1

/*
 * Code maturity level options
 */
#define CONFIG_EXPERIMENTAL 1
#define CONFIG_CLEAN_COMPILE 1
#define CONFIG_BROKEN_ON_SMP 1
#define CONFIG_INIT_ENV_ARG_LIMIT 32

/*
 * General setup
 */
#define CONFIG_LOCALVERSION ".6-VENUS-RESCUE"
#define CONFIG_SWAP 1
#define CONFIG_SYSVIPC 1
#undef CONFIG_POSIX_MQUEUE
#undef CONFIG_BSD_PROCESS_ACCT
#undef CONFIG_SYSCTL
#undef CONFIG_AUDIT
#define CONFIG_HOTPLUG 1
#define CONFIG_KOBJECT_UEVENT 1
#undef CONFIG_IKCONFIG
#define CONFIG_EMBEDDED 1
#undef CONFIG_KALLSYMS
#define CONFIG_PRINTK 1
#define CONFIG_BUG 1
#define CONFIG_BASE_FULL 1
#define CONFIG_FUTEX 1
#define CONFIG_EPOLL 1
#define CONFIG_CC_OPTIMIZE_FOR_SIZE 1
#define CONFIG_SHMEM 1
#define CONFIG_CC_ALIGN_FUNCTIONS 0
#define CONFIG_CC_ALIGN_LABELS 0
#define CONFIG_CC_ALIGN_LOOPS 0
#define CONFIG_CC_ALIGN_JUMPS 0
#undef CONFIG_TINY_SHMEM
#define CONFIG_BASE_SMALL 0

/*
 * Loadable module support
 */
#undef CONFIG_MODULES

/*
 * Machine selection
 */
#undef CONFIG_MIPS_MTX1
#undef CONFIG_MIPS_BOSPORUS
#undef CONFIG_MIPS_PB1000
#undef CONFIG_MIPS_PB1100
#undef CONFIG_MIPS_PB1500
#undef CONFIG_MIPS_PB1550
#undef CONFIG_MIPS_PB1200
#undef CONFIG_MIPS_DB1000
#undef CONFIG_MIPS_DB1100
#undef CONFIG_MIPS_DB1500
#undef CONFIG_MIPS_DB1550
#undef CONFIG_MIPS_DB1200
#undef CONFIG_MIPS_MIRAGE
#undef CONFIG_MIPS_COBALT
#undef CONFIG_MACH_DECSTATION
#undef CONFIG_MIPS_EV64120
#undef CONFIG_MIPS_EV96100
#undef CONFIG_MIPS_IVR
#undef CONFIG_MIPS_ITE8172
#undef CONFIG_MACH_JAZZ
#undef CONFIG_LASAT
#undef CONFIG_MIPS_ATLAS
#undef CONFIG_MIPS_MALTA
#undef CONFIG_MIPS_SEAD
#define CONFIG_REALTEK_VENUS 1
#undef CONFIG_MOMENCO_JAGUAR_ATX
#undef CONFIG_MOMENCO_OCELOT
#undef CONFIG_MOMENCO_OCELOT_3
#undef CONFIG_MOMENCO_OCELOT_C
#undef CONFIG_MOMENCO_OCELOT_G
#undef CONFIG_MIPS_XXS1500
#undef CONFIG_DDB5074
#undef CONFIG_DDB5476
#undef CONFIG_DDB5477
#undef CONFIG_MACH_VR41XX
#undef CONFIG_PMC_YOSEMITE
#undef CONFIG_QEMU
#undef CONFIG_SGI_IP22
#undef CONFIG_SGI_IP27
#undef CONFIG_SGI_IP32
#undef CONFIG_SIBYTE_SWARM
#undef CONFIG_SIBYTE_SENTOSA
#undef CONFIG_SIBYTE_RHONE
#undef CONFIG_SIBYTE_CARMEL
#undef CONFIG_SIBYTE_PTSWARM
#undef CONFIG_SIBYTE_LITTLESUR
#undef CONFIG_SIBYTE_CRHINE
#undef CONFIG_SIBYTE_CRHONE
#undef CONFIG_SNI_RM200_PCI
#undef CONFIG_TOSHIBA_JMR3927
#undef CONFIG_TOSHIBA_RBTX4927
#define CONFIG_REALTEK_RTOS_MEMORY_SIZE 0x280000
#undef CONFIG_REALTEK_DETERMINE_SYSTEM_CPU_CLOCK_FREQUENCY
#undef CONFIG_REALTEK_SYSTEM_OWNS_SECOND_UART
#define CONFIG_REALTEK_USE_EXTERNAL_TIMER_INTERRUPT 1
#undef CONFIG_REALTEK_COMPACT

/*
 * Uncatalogued drivers
 */
#define CONFIG_REALTEK_IR 1
#define CONFIG_REALTEK_VFD 1
#define CONFIG_REALTEK_GPIO 1
#undef CONFIG_REALTEK_I2CSLAVE
#define CONFIG_REALTEK_GPIO_RESCUE_FOR_PC_INSTALL 1
#define CONFIG_REALTEK_SE 1
#define CONFIG_REALTEK_RPC 1

/*
 * Realtek performance facility
 */
#define CONFIG_REALTEK_NO_SHADOW_REGISTERS 1
#undef CONFIG_REALTEK_USE_SHADOW_REGISTERS
#undef CONFIG_REALTEK_USE_FAST_INTERRUPT
#define CONFIG_REALTEK_DISABLE_BOOT_HOTPLUG 1
#undef CONFIG_REALTEK_OPEN_CU0
#define CONFIG_REALTEK_MAP_IO_REGISTERS 1
#undef CONFIG_REALTEK_RECLAIM_BOOT_MEM
#undef CONFIG_REALTEK_ADVANCED_RECLAIM
#undef CONFIG_REALTEK_SCHED_LOG
#undef CONFIG_REALTEK_DETECT_OCCUPY

/*
 * Realtek debug facility
 */
#define CONFIG_REALTEK_NO_SB2_DEBUG 1
#undef CONFIG_REALTEK_TEXT_DEBUG
#undef CONFIG_REALTEK_MEMORY_DEBUG_MODE
#undef CONFIG_REALTEK_USER_DEBUG
#undef CONFIG_REALTEK_WATCHPOINT
#undef CONFIG_REALTEK_ENABLE_ADE
#undef CONFIG_REALTEK_SHOW_STACK
#undef CONFIG_REALTEK_SHOW_MALLOC_SIZE
#undef CONFIG_REALTEK_MONITOR_PAGE
#undef CONFIG_REALTEK_WATCHDOG
#undef CONFIG_REALTEK_RESERVE_DVR
#undef CONFIG_REALTEK_PCI_SUPPORT
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1
#define CONFIG_GENERIC_CALIBRATE_DELAY 1
#define CONFIG_HAVE_DEC_LOCK 1
#define CONFIG_DMA_NONCOHERENT 1
#define CONFIG_GENERIC_ISA_DMA 1
#undef CONFIG_CPU_BIG_ENDIAN
#define CONFIG_CPU_LITTLE_ENDIAN 1
#define CONFIG_SYS_SUPPORTS_LITTLE_ENDIAN 1
#define CONFIG_IRQ_CPU 1
#define CONFIG_REALTEK_BOARDS_GEN 1
#define CONFIG_REALTEK_VENUS_SERIAL_PORT 1
#define CONFIG_MIPS_L1_CACHE_SHIFT 5

/*
 * CPU selection
 */
#define CONFIG_CPU_MIPS32_R1 1
#undef CONFIG_CPU_MIPS32_R2
#undef CONFIG_CPU_MIPS64_R1
#undef CONFIG_CPU_R3000
#undef CONFIG_CPU_TX39XX
#undef CONFIG_CPU_VR41XX
#undef CONFIG_CPU_R4300
#undef CONFIG_CPU_R4X00
#undef CONFIG_CPU_TX49XX
#undef CONFIG_CPU_R5000
#undef CONFIG_CPU_R5432
#undef CONFIG_CPU_R6000
#undef CONFIG_CPU_NEVADA
#undef CONFIG_CPU_R8000
#undef CONFIG_CPU_R10000
#undef CONFIG_CPU_RM7000
#undef CONFIG_CPU_RM9000
#undef CONFIG_CPU_SB1
#define CONFIG_SYS_SUPPORTS_32BIT_KERNEL 1
#define CONFIG_CPU_SUPPORTS_32BIT_KERNEL 1

/*
 * Kernel type
 */
#define CONFIG_MIPS32 1
#undef CONFIG_MIPS64
#undef CONFIG_64BIT
#define CONFIG_PAGE_SIZE_4KB 1
#undef CONFIG_PAGE_SIZE_8KB
#undef CONFIG_PAGE_SIZE_16KB
#undef CONFIG_PAGE_SIZE_64KB
#define CONFIG_CPU_HAS_PREFETCH 1
#undef CONFIG_64BIT_PHYS_ADDR
#undef CONFIG_CPU_ADVANCED
#define CONFIG_CPU_HAS_LLSC 1
#define CONFIG_CPU_HAS_SYNC 1
#undef CONFIG_PREEMPT
#undef CONFIG_PM

/*
 * Bus options (PCI, PCMCIA, EISA, ISA, TC)
 */
#define CONFIG_MMU 1

/*
 * PCCARD (PCMCIA/CardBus) support
 */
#undef CONFIG_PCCARD

/*
 * PCI Hotplug Support
 */

/*
 * Executable file formats
 */
#define CONFIG_BINFMT_ELF 1
#undef CONFIG_BINFMT_MISC
#define CONFIG_TRAD_SIGNALS 1

/*
 * Device Drivers
 */

/*
 * Generic Driver Options
 */
#define CONFIG_STANDALONE 1
#undef CONFIG_PREVENT_FIRMWARE_BUILD
#undef CONFIG_FW_LOADER

/*
 * Memory Technology Devices (MTD)
 */
#define CONFIG_MTD 1
#undef CONFIG_MTD_DEBUG
#undef CONFIG_MTD_CONCAT
#define CONFIG_MTD_PARTITIONS 1
#undef CONFIG_MTD_REDBOOT_PARTS
#define CONFIG_MTD_CMDLINE_PARTS 1

/*
 * User Modules And Translation Layers
 */
#undef CONFIG_MTD_CHAR
#define CONFIG_MTD_BLOCK 1
#undef CONFIG_FTL
#undef CONFIG_NFTL
#undef CONFIG_INFTL

/*
 * RAM/ROM/Flash chip drivers
 */
#define CONFIG_MTD_CFI 1
#undef CONFIG_MTD_JEDECPROBE
#define CONFIG_MTD_GEN_PROBE 1
#undef CONFIG_MTD_CFI_ADV_OPTIONS
#define CONFIG_MTD_MAP_BANK_WIDTH_1 1
#define CONFIG_MTD_MAP_BANK_WIDTH_2 1
#define CONFIG_MTD_MAP_BANK_WIDTH_4 1
#undef CONFIG_MTD_MAP_BANK_WIDTH_8
#undef CONFIG_MTD_MAP_BANK_WIDTH_16
#undef CONFIG_MTD_MAP_BANK_WIDTH_32
#define CONFIG_MTD_CFI_I1 1
#define CONFIG_MTD_CFI_I2 1
#undef CONFIG_MTD_CFI_I4
#undef CONFIG_MTD_CFI_I8
#undef CONFIG_MTD_CFI_INTELEXT
#define CONFIG_MTD_CFI_AMDSTD 1
#define CONFIG_MTD_CFI_AMDSTD_RETRY 0
#undef CONFIG_MTD_CFI_STAA
#define CONFIG_MTD_CFI_UTIL 1
#undef CONFIG_MTD_RAM
#undef CONFIG_MTD_ROM
#undef CONFIG_MTD_ABSENT
#undef CONFIG_MTD_VENUS_SFC

/*
 * Mapping drivers for chip access
 */
#undef CONFIG_MTD_COMPLEX_MAPPINGS
#define CONFIG_MTD_PHYSMAP 1
#define CONFIG_MTD_PHYSMAP_START 0x1f900000
#define CONFIG_MTD_PHYSMAP_LEN 0x400000
#define CONFIG_MTD_PHYSMAP_BANKWIDTH 1

/*
 * Self-contained MTD device drivers
 */
#undef CONFIG_MTD_SLRAM
#undef CONFIG_MTD_PHRAM
#undef CONFIG_MTD_MTDRAM
#undef CONFIG_MTD_BLKMTD
#undef CONFIG_MTD_BLOCK2MTD

/*
 * Disk-On-Chip Device Drivers
 */
#undef CONFIG_MTD_DOC2000
#undef CONFIG_MTD_DOC2001
#undef CONFIG_MTD_DOC2001PLUS

/*
 * NAND Flash Device Drivers
 */
#undef CONFIG_MTD_NAND

/*
 * Parallel port support
 */
#undef CONFIG_PARPORT

/*
 * Plug and Play support
 */

/*
 * Block devices
 */
#undef CONFIG_BLK_DEV_FD
#undef CONFIG_BLK_DEV_COW_COMMON
#define CONFIG_BLK_DEV_LOOP 1
#undef CONFIG_BLK_DEV_CRYPTOLOOP
#undef CONFIG_BLK_DEV_NBD
#undef CONFIG_BLK_DEV_UB
#undef CONFIG_BLK_DEV_RAM
#define CONFIG_BLK_DEV_RAM_COUNT 16
#define CONFIG_INITRAMFS_SOURCE "./rootfs ./usr/rescue_initramfs_list"
#define CONFIG_INITRAMFS_ROOT_UID 0
#define CONFIG_INITRAMFS_ROOT_GID 0
#undef CONFIG_LBD
#undef CONFIG_CDROM_PKTCDVD

/*
 * IO Schedulers
 */
#define CONFIG_IOSCHED_NOOP 1
#undef CONFIG_IOSCHED_AS
#undef CONFIG_IOSCHED_DEADLINE
#undef CONFIG_IOSCHED_CFQ
#undef CONFIG_ATA_OVER_ETH

/*
 * ATA/ATAPI/MFM/RLL support
 */
#define CONFIG_IDE 1
#define CONFIG_BLK_DEV_IDE 1

/*
 * Please see Documentation/ide.txt for help/info on IDE drives
 */
#undef CONFIG_BLK_DEV_IDE_SATA_BRIDGE
#undef CONFIG_BLK_DEV_IDE_SATA
#define CONFIG_BLK_DEV_IDEDISK 1
#undef CONFIG_IDEDISK_MULTI_MODE
#define CONFIG_BLK_DEV_IDECD 1
#undef CONFIG_BLK_DEV_IDETAPE
#undef CONFIG_BLK_DEV_IDEFLOPPY
#undef CONFIG_BLK_DEV_IDESCSI
#undef CONFIG_IDE_TASK_IOCTL

/*
 * IDE chipset support/bugfixes
 */
#define CONFIG_IDE_GENERIC 1
#undef CONFIG_IDE_ARM
#undef CONFIG_BLK_DEV_IDEDMA
#undef CONFIG_IDEDMA_AUTO
#undef CONFIG_BLK_DEV_HD

/*
 * SCSI device support
 */
#define CONFIG_SCSI 1
#undef CONFIG_SCSI_PROC_FS

/*
 * SCSI support type (disk, tape, CD-ROM)
 */
#define CONFIG_BLK_DEV_SD 1
#undef CONFIG_CHR_DEV_ST
#undef CONFIG_CHR_DEV_OSST
#undef CONFIG_BLK_DEV_SR
#undef CONFIG_CHR_DEV_SG

/*
 * Some SCSI devices (e.g. CD jukebox) support multiple LUNs
 */
#define CONFIG_SCSI_MULTI_LUN 1
#undef CONFIG_SCSI_CONSTANTS
#undef CONFIG_SCSI_LOGGING

/*
 * SCSI Transport Attributes
 */
#undef CONFIG_SCSI_SPI_ATTRS
#undef CONFIG_SCSI_FC_ATTRS
#undef CONFIG_SCSI_ISCSI_ATTRS

/*
 * SCSI low-level drivers
 */
#undef CONFIG_SCSI_SATA
#undef CONFIG_SCSI_DEBUG

/*
 * Multi-device support (RAID and LVM)
 */
#undef CONFIG_MD

/*
 * Fusion MPT device support
 */

/*
 * IEEE 1394 (FireWire) support
 */
#undef CONFIG_IEEE1394_VENUS

/*
 * I2O device support
 */

/*
 * Networking support
 */
#define CONFIG_NET 1

/*
 * Networking options
 */
#undef CONFIG_PACKET
#undef CONFIG_UNIX
#undef CONFIG_NET_KEY
#define CONFIG_INET 1
#define CONFIG_IP_MULTICAST 1
#undef CONFIG_IP_ADVANCED_ROUTER
#define CONFIG_IP_PNP 1
#undef CONFIG_IP_PNP_DHCP
#undef CONFIG_IP_PNP_BOOTP
#undef CONFIG_IP_PNP_RARP
#undef CONFIG_NET_IPIP
#undef CONFIG_NET_IPGRE
#undef CONFIG_IP_MROUTE
#undef CONFIG_ARPD
#undef CONFIG_SYN_COOKIES
#undef CONFIG_INET_AH
#undef CONFIG_INET_ESP
#undef CONFIG_INET_IPCOMP
#undef CONFIG_INET_TUNNEL
#undef CONFIG_IP_TCPDIAG
#undef CONFIG_IP_TCPDIAG_IPV6
#undef CONFIG_IPV6
#undef CONFIG_NETFILTER

/*
 * SCTP Configuration (EXPERIMENTAL)
 */
#undef CONFIG_IP_SCTP
#undef CONFIG_ATM
#undef CONFIG_BRIDGE
#undef CONFIG_VLAN_8021Q
#undef CONFIG_DECNET
#undef CONFIG_LLC2
#undef CONFIG_IPX
#undef CONFIG_ATALK
#undef CONFIG_X25
#undef CONFIG_LAPB
#undef CONFIG_NET_DIVERT
#undef CONFIG_ECONET
#undef CONFIG_WAN_ROUTER

/*
 * QoS and/or fair queueing
 */
#undef CONFIG_NET_SCHED
#undef CONFIG_NET_CLS_ROUTE

/*
 * Network testing
 */
#undef CONFIG_NET_PKTGEN
#undef CONFIG_NETPOLL
#undef CONFIG_NET_POLL_CONTROLLER
#undef CONFIG_HAMRADIO
#undef CONFIG_IRDA
#undef CONFIG_BT
#define CONFIG_NETDEVICES 1
#undef CONFIG_DUMMY
#undef CONFIG_BONDING
#undef CONFIG_EQUALIZER
#undef CONFIG_TUN

/*
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1
#define CONFIG_MII 1
#define CONFIG_8139CP_VENUS 1
#undef CONFIG_8139CP_MARS

/*
 * Ethernet (1000 Mbit)
 */

/*
 * Ethernet (10000 Mbit)
 */

/*
 * Token Ring devices
 */

/*
 * Wireless LAN (non-hamradio)
 */
#undef CONFIG_NET_RADIO
#undef CONFIG_REALTEK_IEEE80211

/*
 * UWB wireless LAN
 */
#undef CONFIG_NET_UWB

/*
 * Wan interfaces
 */
#undef CONFIG_WAN
#undef CONFIG_PPP
#undef CONFIG_SLIP
#undef CONFIG_SHAPER
#undef CONFIG_NETCONSOLE

/*
 * ISDN subsystem
 */
#undef CONFIG_ISDN

/*
 * Telephony Support
 */
#undef CONFIG_PHONE

/*
 * Input device support
 */
#define CONFIG_INPUT 1

/*
 * Userland interfaces
 */
#undef CONFIG_INPUT_MOUSEDEV
#undef CONFIG_INPUT_JOYDEV
#undef CONFIG_INPUT_TSDEV
#undef CONFIG_INPUT_EVDEV
#undef CONFIG_INPUT_EVBUG

/*
 * Input Device Drivers
 */
#undef CONFIG_INPUT_KEYBOARD
#undef CONFIG_INPUT_MOUSE
#undef CONFIG_INPUT_JOYSTICK
#undef CONFIG_INPUT_TOUCHSCREEN
#undef CONFIG_INPUT_MISC

/*
 * Hardware I/O ports
 */
#undef CONFIG_SERIO
#undef CONFIG_GAMEPORT

/*
 * Character devices
 */
#define CONFIG_VT 1
#undef CONFIG_VT_CONSOLE
#define CONFIG_HW_CONSOLE 1
#undef CONFIG_SERIAL_NONSTANDARD

/*
 * Serial drivers
 */
#define CONFIG_SERIAL_8250 1
#define CONFIG_SERIAL_8250_CONSOLE 1
#define CONFIG_SERIAL_8250_NR_UARTS 2
#define CONFIG_SERIAL_8250_EXTENDED 1
#undef CONFIG_SERIAL_8250_MANY_PORTS
#define CONFIG_SERIAL_8250_SHARE_IRQ 1
#undef CONFIG_SERIAL_8250_DETECT_IRQ
#undef CONFIG_SERIAL_8250_MULTIPORT
#undef CONFIG_SERIAL_8250_RSA

/*
 * Non-8250 serial port support
 */
#define CONFIG_SERIAL_CORE 1
#define CONFIG_SERIAL_CORE_CONSOLE 1
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_LEGACY_PTYS 1
#define CONFIG_LEGACY_PTY_COUNT 8

/*
 * IPMI
 */
#undef CONFIG_IPMI_HANDLER

/*
 * Watchdog Cards
 */
#undef CONFIG_WATCHDOG
#undef CONFIG_RTC
#define CONFIG_GEN_RTC 1
#undef CONFIG_GEN_RTC_X
#undef CONFIG_DTLK
#undef CONFIG_R3964

/*
 * Ftape, the floppy tape device driver
 */
#undef CONFIG_DRM
#undef CONFIG_RAW_DRIVER

/*
 * TPM devices
 */

/*
 * I2C support
 */
#undef CONFIG_I2C

/*
 * Dallas's 1-wire bus
 */
#undef CONFIG_W1

/*
 * Misc devices
 */

/*
 * Multimedia devices
 */
#undef CONFIG_VIDEO_DEV

/*
 * Digital Video Broadcasting Devices
 */
#undef CONFIG_DVB

/*
 * Supported USB Adapters
 */

/*
 * Graphics support
 */
#undef CONFIG_FB

/*
 * Console display driver support
 */
#undef CONFIG_VGA_CONSOLE
#define CONFIG_DUMMY_CONSOLE 1

/*
 * Sound
 */
#undef CONFIG_SOUND

/*
 * USB support
 */
#define CONFIG_USB_ARCH_HAS_HCD 1
#define CONFIG_USB_ARCH_HAS_OHCI 1
#define CONFIG_REALTEK_VENUS_USB 1
#define CONFIG_REALTEK_VENUS_USB_1261 1
#undef CONFIG_REALTEK_VENUS_USB_1261_ECO
#undef CONFIG_REALTEK_VENUS_USB_TEST_MODE
#define CONFIG_USB 1
#undef CONFIG_USB_DEBUG

/*
 * Miscellaneous USB options
 */
#undef CONFIG_USB_DEVICEFS
#define CONFIG_USB_BANDWIDTH 1
#undef CONFIG_USB_DYNAMIC_MINORS
#undef CONFIG_USB_SUSPEND
#undef CONFIG_USB_OTG

/*
 * USB Host Controller Drivers
 */
#define CONFIG_USB_EHCI_HCD 1
#undef CONFIG_USB_EHCI_SPLIT_ISO
#undef CONFIG_USB_EHCI_ROOT_HUB_TT
#define CONFIG_USB_OHCI_HCD 1
#undef CONFIG_USB_OHCI_BIG_ENDIAN
#define CONFIG_USB_OHCI_LITTLE_ENDIAN 1

/*
 * USB Device Class drivers
 */
#undef CONFIG_USB_BLUETOOTH_TTY
#undef CONFIG_USB_ACM
#undef CONFIG_USB_PRINTER

/*
 * NOTE: USB_STORAGE enables SCSI, and 'SCSI disk support'
 */

/*
 * may also be needed; see USB_STORAGE Help for more information
 */
#define CONFIG_USB_STORAGE 1
#undef CONFIG_USB_STORAGE_DEBUG
#undef CONFIG_USB_STORAGE_DATAFAB
#undef CONFIG_USB_STORAGE_FREECOM
#undef CONFIG_USB_STORAGE_ISD200
#undef CONFIG_USB_STORAGE_DPCM
#undef CONFIG_USB_STORAGE_USBAT
#undef CONFIG_USB_STORAGE_SDDR09
#undef CONFIG_USB_STORAGE_SDDR55
#undef CONFIG_USB_STORAGE_JUMPSHOT

/*
 * USB Input Devices
 */
#undef CONFIG_USB_HID

/*
 * USB HID Boot Protocol drivers
 */
#undef CONFIG_USB_KBD
#undef CONFIG_USB_MOUSE
#undef CONFIG_USB_AIPTEK
#undef CONFIG_USB_WACOM
#undef CONFIG_USB_KBTAB
#undef CONFIG_USB_POWERMATE
#undef CONFIG_USB_MTOUCH
#undef CONFIG_USB_EGALAX
#undef CONFIG_USB_XPAD
#undef CONFIG_USB_ATI_REMOTE

/*
 * USB Imaging devices
 */
#undef CONFIG_USB_MDC800
#undef CONFIG_USB_MICROTEK

/*
 * USB Multimedia devices
 */
#undef CONFIG_USB_DABUSB

/*
 * Video4Linux support is needed for USB Multimedia device support
 */

/*
 * USB Network Adapters
 */
#undef CONFIG_USB_CATC
#undef CONFIG_USB_KAWETH
#undef CONFIG_USB_PEGASUS
#undef CONFIG_USB_RTL8150
#undef CONFIG_USB_USBNET
#undef CONFIG_USB_MON

/*
 * USB port drivers
 */

/*
 * USB Serial Converter support
 */
#undef CONFIG_USB_SERIAL

/*
 * USB Miscellaneous drivers
 */
#undef CONFIG_USB_EMI62
#undef CONFIG_USB_EMI26
#undef CONFIG_USB_AUERSWALD
#undef CONFIG_USB_RIO500
#undef CONFIG_USB_LEGOTOWER
#undef CONFIG_USB_LCD
#undef CONFIG_USB_LED
#undef CONFIG_USB_CYTHERM
#undef CONFIG_USB_PHIDGETKIT
#undef CONFIG_USB_PHIDGETSERVO
#undef CONFIG_USB_IDMOUSE
#undef CONFIG_USB_SISUSBVGA

/*
 * USB ATM/DSL drivers
 */

/*
 * USB Gadget Support
 */
#undef CONFIG_USB_GADGET

/*
 * MMC/SD Card support
 */
#undef CONFIG_MMC

/*
 * InfiniBand support
 */
#undef CONFIG_INFINIBAND

/*
 * File systems
 */
#undef CONFIG_EXT2_FS
#define CONFIG_EXT3_FS 1
#undef CONFIG_EXT3_FS_ABCOPY
#undef CONFIG_EXT3_FS_XATTR
#define CONFIG_JBD 1
#undef CONFIG_JBD_DEBUG
#undef CONFIG_REISERFS_FS
#undef CONFIG_JFS_FS

/*
 * XFS support
 */
#undef CONFIG_XFS_FS
#undef CONFIG_MINIX_FS
#undef CONFIG_ROMFS_FS
#undef CONFIG_QUOTA
#undef CONFIG_DNOTIFY
#undef CONFIG_AUTOFS_FS
#undef CONFIG_AUTOFS4_FS
#undef CONFIG_FUSE_FS
#undef CONFIG_PTP_FS

/*
 * CD-ROM/DVD Filesystems
 */
#undef CONFIG_VCD
#define CONFIG_JOLIET 1
#undef CONFIG_ZISOFS
#define CONFIG_ISO9660_FS 1
#define CONFIG_UDF_FS 1
#define CONFIG_UDF_NLS 1

/*
 * DOS/FAT/NT Filesystems
 */
#define CONFIG_FAT_FS 1
#undef CONFIG_MSDOS_FS
#define CONFIG_VFAT_FS 1
#define CONFIG_FAT_DEFAULT_CODEPAGE 437
#define CONFIG_FAT_DEFAULT_IOCHARSET "iso8859-1"
#define CONFIG_NTFS_FS 1
#undef CONFIG_NTFS_DEBUG
#undef CONFIG_NTFS_RW

/*
 * Pseudo filesystems
 */
#define CONFIG_PROC_FS 1
#undef CONFIG_PROC_KCORE
#define CONFIG_SYSFS 1
#define CONFIG_DEVFS_FS 1
#undef CONFIG_DEVFS_MOUNT
#undef CONFIG_DEVFS_DEBUG
#define CONFIG_DEVPTS_FS_XATTR 1
#define CONFIG_DEVPTS_FS_SECURITY 1
#undef CONFIG_TMPFS
#undef CONFIG_HUGETLB_PAGE
#define CONFIG_RAMFS 1

/*
 * Miscellaneous filesystems
 */
#undef CONFIG_ADFS_FS
#undef CONFIG_AFFS_FS
#undef CONFIG_HFS_FS
#undef CONFIG_HFSPLUS_FS
#undef CONFIG_BEFS_FS
#undef CONFIG_BFS_FS
#undef CONFIG_EFS_FS
#undef CONFIG_YAFFS_FS
#undef CONFIG_JFFS_FS
#define CONFIG_JFFS2_FS 1
#define CONFIG_JFFS2_FS_DEBUG 0
#undef CONFIG_JFFS2_FS_NAND
#undef CONFIG_JFFS2_FS_NOR_ECC
#undef CONFIG_JFFS2_COMPRESSION_OPTIONS
#define CONFIG_JFFS2_ZLIB 1
#define CONFIG_JFFS2_RTIME 1
#undef CONFIG_JFFS2_RUBIN
#undef CONFIG_CRAMFS
#define CONFIG_SQUASHFS 1
#undef CONFIG_SQUASHFS_EMBEDDED
#define CONFIG_SQUASHFS_FRAGMENT_CACHE_SIZE 3
#undef CONFIG_SQUASHFS_VMALLOC
#undef CONFIG_VXFS_FS
#undef CONFIG_HPFS_FS
#undef CONFIG_QNX4FS_FS
#undef CONFIG_SYSV_FS
#undef CONFIG_UFS_FS

/*
 * Network File Systems
 */
#define CONFIG_NFS_FS 1
#define CONFIG_NFS_V3 1
#undef CONFIG_NFS_V4
#undef CONFIG_NFS_DIRECTIO
#undef CONFIG_NFSD
#undef CONFIG_ROOT_NFS
#define CONFIG_LOCKD 1
#define CONFIG_LOCKD_V4 1
#define CONFIG_SUNRPC 1
#undef CONFIG_RPCSEC_GSS_KRB5
#undef CONFIG_RPCSEC_GSS_SPKM3
#undef CONFIG_SMB_FS
#define CONFIG_CIFS 1
#undef CONFIG_CIFS_STATS
#undef CONFIG_CIFS_XATTR
#undef CONFIG_CIFS_EXPERIMENTAL
#undef CONFIG_NCP_FS
#undef CONFIG_CODA_FS
#undef CONFIG_AFS_FS

/*
 * Partition Types
 */
#undef CONFIG_PARTITION_ADVANCED
#define CONFIG_MSDOS_PARTITION 1

/*
 * Native Language Support
 */
#define CONFIG_NLS 1
#define CONFIG_NLS_DEFAULT "iso8859-1"
#define CONFIG_NLS_CODEPAGE_437 1
#undef CONFIG_NLS_CODEPAGE_737
#undef CONFIG_NLS_CODEPAGE_775
#undef CONFIG_NLS_CODEPAGE_850
#undef CONFIG_NLS_CODEPAGE_852
#undef CONFIG_NLS_CODEPAGE_855
#undef CONFIG_NLS_CODEPAGE_857
#undef CONFIG_NLS_CODEPAGE_860
#undef CONFIG_NLS_CODEPAGE_861
#undef CONFIG_NLS_CODEPAGE_862
#undef CONFIG_NLS_CODEPAGE_863
#undef CONFIG_NLS_CODEPAGE_864
#undef CONFIG_NLS_CODEPAGE_865
#undef CONFIG_NLS_CODEPAGE_866
#undef CONFIG_NLS_CODEPAGE_869
#undef CONFIG_NLS_CODEPAGE_936
#undef CONFIG_NLS_CODEPAGE_950
#undef CONFIG_NLS_CODEPAGE_932
#undef CONFIG_NLS_CODEPAGE_949
#undef CONFIG_NLS_CODEPAGE_874
#undef CONFIG_NLS_ISO8859_8
#undef CONFIG_NLS_CODEPAGE_1250
#undef CONFIG_NLS_CODEPAGE_1251
#undef CONFIG_NLS_ASCII
#define CONFIG_NLS_ISO8859_1 1
#undef CONFIG_NLS_ISO8859_2
#undef CONFIG_NLS_ISO8859_3
#undef CONFIG_NLS_ISO8859_4
#undef CONFIG_NLS_ISO8859_5
#undef CONFIG_NLS_ISO8859_6
#undef CONFIG_NLS_ISO8859_7
#undef CONFIG_NLS_ISO8859_9
#undef CONFIG_NLS_ISO8859_13
#undef CONFIG_NLS_ISO8859_14
#undef CONFIG_NLS_ISO8859_15
#undef CONFIG_NLS_KOI8_R
#undef CONFIG_NLS_KOI8_U
#define CONFIG_NLS_UTF8 1

/*
 * Profiling support
 */
#undef CONFIG_PROFILING

/*
 * Kernel hacking
 */
#undef CONFIG_PRINTK_TIME
#undef CONFIG_DEBUG_KERNEL
#define CONFIG_LOG_BUF_SHIFT 14
#define CONFIG_CROSSCOMPILE 1
#define CONFIG_CMDLINE ""

/*
 * Security options
 */
#undef CONFIG_KEYS
#undef CONFIG_SECURITY

/*
 * Cryptographic options
 */
#undef CONFIG_CRYPTO

/*
 * Hardware crypto devices
 */

/*
 * Library routines
 */
#undef CONFIG_CRC_CCITT
#define CONFIG_CRC32 1
#undef CONFIG_LIBCRC32C
#define CONFIG_ZLIB_INFLATE 1
#define CONFIG_ZLIB_DEFLATE 1
#define CONFIG_GENERIC_HARDIRQS 1
#define CONFIG_GENERIC_IRQ_PROBE 1
