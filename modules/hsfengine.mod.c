#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x525b86d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe9177b3e, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsFloatPrefix) },
	{ 0x58245be, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCriticalSectionRelease) },
	{ 0xd848e610, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsLockLock) },
	{ 0x9b1c69f9, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_DcpCallback) },
	{ 0xdcc0ee56, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCriticalSectionDestroy) },
	{ 0xe7910696, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsSprintf) },
	{ 0x55753fd0, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_DcpSetVolume) },
	{ 0x592eb97d, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsLockUnlock) },
	{ 0x533191a, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsAllocate) },
	{ 0xd3451df, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsAtomicDecrement) },
	{ 0xbadd8acb, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsStrCpy) },
	{ 0x45a5147e, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsImmediateTimeOut) },
	{ 0x3bb8c2b7, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCreatePeriodicTimer) },
	{ 0xabe9e472, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_NVM_Write) },
	{ 0x905c025, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsLockDestroy) },
	{ 0xff355e29, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMemCmp) },
	{ 0x9768ea27, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsFloatSuffix) },
	{ 0xbb371505, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsDiagMgrClose) },
	{ 0x9cb7b003, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsDebugBreakpoint) },
	{ 0xa1120b8a, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsAtomicIncrement) },
	{ 0x7fd0ac65, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsDiagMgrNotify) },
	{ 0xa31d862, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsLockCreate) },
	{ 0xae0c6a09, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsToupper) },
	{ 0x3a39cf66, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsIsDigit) },
	{ 0xe03abc15, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMemCpy) },
	{ 0xe454aa4a, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_NVM_Open) },
	{ 0xd52ba08d, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsAtomicAdd) },
	{ 0xc51f9205, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCriticalSectionCreate) },
	{ 0x19b154ab, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsGetCurrentThread) },
	{ 0x5f5dbae8, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCriticalSectionAcquire) },
	{ 0x9530d4f7, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsSleep) },
	{ 0xd432de77, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsLockTryUnlock) },
	{ 0x22e421f, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMemSet) },
	{ 0x89ff00c2, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsGetProcessorFreq) },
	{ 0x497eb461, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsDestroyPeriodicTimer) },
	{ 0x896eaab5, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsAtomicCompareAndSwapEx) },
	{ 0x85c65ce8, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_NVM_Read) },
	{ 0x6817e1dc, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMemDMAAllocate) },
	{ 0x6199c803, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMemDMAFree) },
	{ 0xd6e3cb08, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsFree) },
	{ 0x680e0682, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_DcpCreate) },
	{ 0xf696d723, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsDiagMgrOpen) },
	{ 0x22f34e04, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsErrorPrintf) },
	{ 0xfeecb909, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_NVM_Close) },
	{ 0xcfa2536a, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsStrCmp) },
	{ 0xa025acfb, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsGetSystemTime) },
	{ 0xf425b003, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsReadCpuCnt) },
	{ 0xe925defe, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsStrnCpy) },
	{ 0x9202a2ee, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsStrLen) },
	{ 0x3901fa46, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsSetPeriodicTimer) },
	{ 0x8dd530ee, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsDebugPrintf) },
	{ 0xa3cded78, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_DcpDestroy) },
	{ 0x95017331, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMemMove) },
	{ 0x7fd1656, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsLockTry) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hsfosspec";

