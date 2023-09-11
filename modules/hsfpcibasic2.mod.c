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

MODULE_ALIAS("pci:v0000127Ad00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00001024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00001024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00001025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00001025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00001026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00001026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00001085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00001085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00002114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002093sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002146sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002163sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002164sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002165sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002166sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002344sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002364sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002365sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002366sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002444sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002445sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002464sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002465sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002466sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F13sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002704sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002705sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d0000201Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d0000201Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d0000204Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d0000204Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000158Bd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000158Bd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00002F00sv000016ECsd0000010Bbc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00002F00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0640527C7368BD9D6609A51");
