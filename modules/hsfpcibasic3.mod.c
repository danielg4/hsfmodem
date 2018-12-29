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
	{ 0x6dc7dc1e, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfda13dde, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsReadCpuCnt) },
	{ 0x3f5d541f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMapPhysMem) },
	{ 0xc5aa1438, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsSetTimer) },
	{ 0x5054c188, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsPciWriteConfigw) },
	{ 0x7aa0bdd7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsPciReadConfigdw) },
	{ 0x228a8c1f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsIoMemWritew) },
	{ 0x388af6e7, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xd4b11ec7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsErrorPrintf) },
	{ 0xb8db8b33, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsEventWaitTime) },
	{ 0x263ed23b, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r12) },
	{ 0xd1af0c61, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x62242c79, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsStrCat) },
	{ 0xad58880c, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsDestroyTimer) },
	{ 0x78f6edea, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Control) },
	{ 0xa82381a3, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsEventSet) },
	{ 0x7cac7b6, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x7097c067, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsFree) },
	{ 0xe558dd6, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsStrLen) },
	{ 0xec81f6a5, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsIoMemReadw) },
	{ 0xd521aff7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsSprintf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x93fb15cb, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsIoMemReadl) },
	{ 0x43984c2f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCriticalSectionCreate) },
	{ 0x7eb1c898, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsEventClear) },
	{ 0xbb31bfca, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCriticalSectionRelease) },
	{ 0xc0620d74, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xb9fb869c, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsKernelUsesRegParm) },
	{ 0xe74db164, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsUnhookInterrupt) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x422271ce, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsUnmapPhysMem) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf5f1e310, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsSleep) },
	{ 0x4785396f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsAllocate) },
	{ 0x59539e3b, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_cnxt_serial_remove) },
	{ 0x359c1bd3, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsEventDestroy) },
	{ 0x548a7f28, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsPciWriteConfigdw) },
	{ 0x98216ddf, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCancelTimer) },
	{ 0x3c4aca12, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsChangeTimerTimeOut) },
	{ 0x5b00429, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMemSet) },
	{ 0x511dbdca, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsEventCreate) },
	{ 0xfd37ed40, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc79916c6, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_cnxt_serial_add) },
	{ 0x66e478fa, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9a7a7dc9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x26932b93, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb4c7d569, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x775700de, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsPciReadConfigb) },
	{ 0x8230168b, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x70df5840, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsPciReadConfigw) },
	{ 0x3c0e43a9, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsPciWriteConfigb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2909f185, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsIoMemWritel) },
	{ 0xc559022e, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x89905baa, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc1c97e7f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsHookInterrupt) },
	{ 0x36886337, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xbbdb37c7, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsGetProcessorFreq) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x91a19aa1, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x743b5f85, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCreateTimer) },
	{ 0x3e735483, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsGetPCIDeviceResources) },
	{ 0x62731422, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCriticalSectionDestroy) },
	{ 0x6e537fc3, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe1ee409c, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsCriticalSectionAcquire) },
	{ 0xc993bd44, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x8c8c9b26, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hsfosspec,hsfengine,hsfserial";

MODULE_ALIAS("pci:v000014F1d00002F80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F81sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F82sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F83sv*sd*bc*sc*i*");
