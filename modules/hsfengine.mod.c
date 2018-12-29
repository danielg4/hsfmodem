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
	{ 0x3a117d9e, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMemCpy) },
	{ 0x560e67f3, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsLockUnlock) },
	{ 0x1580be3a, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsStrCpy) },
	{ 0xfda13dde, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsReadCpuCnt) },
	{ 0x2b268dd7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsAtomicAdd) },
	{ 0x1f669f53, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_NVM_Close) },
	{ 0xd4b11ec7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsErrorPrintf) },
	{ 0x4693b483, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_DcpCallback) },
	{ 0x30a4edc, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsLockDestroy) },
	{ 0xa9d68c1d, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_DcpSetVolume) },
	{ 0xf6cb405b, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsStrCmp) },
	{ 0x6ed6cd7b, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_DcpCreate) },
	{ 0x7097c067, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsFree) },
	{ 0xe558dd6, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsStrLen) },
	{ 0xefb10258, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMemMove) },
	{ 0x869144fa, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_NVM_Read) },
	{ 0xd521aff7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsSprintf) },
	{ 0x1b4c20ab, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsLockTryUnlock) },
	{ 0xe8b9b1d7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsToupper) },
	{ 0x43984c2f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCriticalSectionCreate) },
	{ 0xc5b2bf4e, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMemCmp) },
	{ 0x4b3150e6, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsFloatPrefix) },
	{ 0xcebdd5e3, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMemDMAFree) },
	{ 0xbb31bfca, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCriticalSectionRelease) },
	{ 0xe70a6e76, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsDiagMgrClose) },
	{ 0xed8ea7e1, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCreatePeriodicTimer) },
	{ 0xbda00ab4, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsGetCurrentThread) },
	{ 0x6d02ec02, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsDiagMgrNotify) },
	{ 0x41644f63, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsAtomicIncrement) },
	{ 0x3e63005c, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsDebugBreakpoint) },
	{ 0xf5f1e310, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsSleep) },
	{ 0x4785396f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsAllocate) },
	{ 0xe2400eaa, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsSetPeriodicTimer) },
	{ 0xb55032a5, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsAtomicCompareAndSwapEx) },
	{ 0x5b00429, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMemSet) },
	{ 0x7b97602d, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsDebugPrintf) },
	{ 0x4a85caf0, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsImmediateTimeOut) },
	{ 0x614ca801, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsStrnCpy) },
	{ 0x5853c222, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_NVM_Write) },
	{ 0x468c278f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_NVM_Open) },
	{ 0xed421536, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsAtomicDecrement) },
	{ 0xd2ef30bb, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsDiagMgrOpen) },
	{ 0x418cabae, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsGetSystemTime) },
	{ 0x90771c65, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsLockLock) },
	{ 0x4aab4a5, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_DcpDestroy) },
	{ 0x7c8c14b8, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsIsDigit) },
	{ 0x173cd215, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMemDMAAllocate) },
	{ 0x30207927, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsLockTry) },
	{ 0xbbdb37c7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsGetProcessorFreq) },
	{ 0x62731422, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCriticalSectionDestroy) },
	{ 0xaf0ecd00, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsLockCreate) },
	{ 0xe1ee409c, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCriticalSectionAcquire) },
	{ 0x221b99cd, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsFloatSuffix) },
	{ 0xc6d45460, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsDestroyPeriodicTimer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hsfosspec";

