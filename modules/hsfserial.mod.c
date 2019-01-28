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
	{ 0xbdc6b187, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe2addb2d, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xb71ad687, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xfa8b9545, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xafcdba49, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_NVM_WriteFlushList) },
	{ 0x5f6ebcaa, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4bf56796, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x79ef272, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsThreadSchedule) },
	{ 0xe051d495, __VMLINUX_SYMBOL_STR(commit_creds) },
	{ 0x8dab9456, __VMLINUX_SYMBOL_STR(uart_handle_cts_change) },
	{ 0xccc8f76, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa3e0586f, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsThreadScheduleInit) },
	{ 0x423035e6, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb78d1c44, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x49d09ed5, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0x51ab895c, __VMLINUX_SYMBOL_STR(uart_update_timeout) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd0361ab, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x26c0207b, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Close) },
	{ 0xbfdaa249, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x494b582c, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Control) },
	{ 0xfbb79d98, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Open) },
	{ 0x35b97bc1, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcdad1757, __VMLINUX_SYMBOL_STR(__tty_insert_flip_char) },
	{ 0x6a0d0447, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x4c936d5d, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xff4155a, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdba4309b, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Destroy) },
	{ 0xd73be77, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsDcpEnsureDaemonIsRunning) },
	{ 0x2421b896, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Monitor) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0x698a99e9, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMdmThread) },
	{ 0x9e40c20d, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0x2331a196, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Configure) },
	{ 0x8e179160, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xfd37ed40, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x3d1b25c7, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsThreadScheduleDone) },
	{ 0x1b7a2673, __VMLINUX_SYMBOL_STR(uart_handle_dcd_change) },
	{ 0x242e722e, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf9ac7839, __VMLINUX_SYMBOL_STR(init_pid_ns) },
	{ 0xf726356c, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xadf88359, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x70befe59, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Read) },
	{ 0xefae3e75, __VMLINUX_SYMBOL_STR(send_sig_info) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0xd6d7dc3, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0x566d2a6c, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3ed883b6, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Create) },
	{ 0xa0497153, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0xa65b4573, __VMLINUX_SYMBOL_STR(find_pid_ns) },
	{ 0x6f6dfb4d, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Write) },
	{ 0xc993bd44, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x90bd7de2, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0x4874bcd7, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hsfosspec,hsfengine";


MODULE_INFO(srcversion, "4623A7931318BEE74C9BD99");
