#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4cf819e6, "module_layout" },
	{ 0x696f0c3, "kmalloc_caches" },
	{ 0x9a1ecf31, "device_release_driver" },
	{ 0x3d258838, "pci_disable_device" },
	{ 0x78f6edea, "cnxthsf_7800205x86_64full_ComCtrl_Control" },
	{ 0x145ca79, "pci_release_regions" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x89a24e4d, "pci_restore_state" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x9166fada, "strncpy" },
	{ 0x59539e3b, "cnxthsf_7800205x86_64full_cnxt_serial_remove" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x86b914bd, "module_put" },
	{ 0xd2a50ed3, "cnxthsf_7800205x86_64full_cnxt_serial_add" },
	{ 0x6d2a4c6f, "put_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc0b2bc48, "pci_unregister_driver" },
	{ 0x4f00afd3, "kmem_cache_alloc_trace" },
	{ 0x48e457cf, "get_device" },
	{ 0x766ff299, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x210cdac4, "pci_request_regions" },
	{ 0x433f0b06, "__pci_register_driver" },
	{ 0xa5d25c36, "pci_get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x152823d2, "pci_choose_state" },
	{ 0x58a78df9, "pci_enable_device" },
	{ 0x5c153fdc, "try_module_get" },
	{ 0xaa5345e1, "pci_save_state" },
};

MODULE_INFO(depends, "hsfengine,hsfserial");

MODULE_ALIAS("pci:v000014F1d00002F80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F81sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F82sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F83sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "45ED8B21C7A7287E8A05850");
