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
	{ 0x6dc7dc1e, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe2addb2d, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xb71ad687, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xfa8b9545, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5f6ebcaa, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x12f42d66, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Destroy) },
	{ 0x4bf56796, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x38db4cd5, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Read) },
	{ 0x8b2b51f4, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Write) },
	{ 0x8dab9456, __VMLINUX_SYMBOL_STR(uart_handle_cts_change) },
	{ 0xccc8f76, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x423035e6, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x78f6edea, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Control) },
	{ 0x49d09ed5, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0xd83a9252, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsDcpEnsureDaemonIsRunning) },
	{ 0x51ab895c, __VMLINUX_SYMBOL_STR(uart_update_timeout) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd9b3a74a, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsMdmThread) },
	{ 0xd0361ab, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xbfdaa249, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0xa8d157c0, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Close) },
	{ 0xcdad1757, __VMLINUX_SYMBOL_STR(__tty_insert_flip_char) },
	{ 0x6a0d0447, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7375a4e4, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsThreadSchedule) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0xfd37ed40, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x542fdf05, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Open) },
	{ 0x1b7a2673, __VMLINUX_SYMBOL_STR(uart_handle_dcd_change) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe0cdc4e2, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsThreadScheduleInit) },
	{ 0xfbad9a4e, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Configure) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x26932b93, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe777a14f, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Monitor) },
	{ 0xf726356c, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xadf88359, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x2ce08f7e, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_OsThreadScheduleDone) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0xcf0c8dae, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_NVM_WriteFlushList) },
	{ 0xd6d7dc3, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0x566d2a6c, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x24cb9f8c, __VMLINUX_SYMBOL_STR(cnxthsf_7800205x86_64full_ComCtrl_Create) },
	{ 0xa0497153, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0xc993bd44, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hsfengine,hsfosspec";


MODULE_INFO(srcversion, "02472E7E86F5EED4F030D64");
