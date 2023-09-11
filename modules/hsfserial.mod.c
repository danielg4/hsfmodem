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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5861ee09, "uart_write_wakeup" },
	{ 0x349cba85, "strchr" },
	{ 0x801e8735, "single_open" },
	{ 0xf9418c06, "param_ops_int" },
	{ 0x10d56d29, "uart_add_one_port" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x12f42d66, "cnxthsf_7800205x86_64full_ComCtrl_Destroy" },
	{ 0x8e3e5524, "single_release" },
	{ 0x38db4cd5, "cnxthsf_7800205x86_64full_ComCtrl_Read" },
	{ 0x8b2b51f4, "cnxthsf_7800205x86_64full_ComCtrl_Write" },
	{ 0xe3af0085, "uart_handle_cts_change" },
	{ 0xa68165d, "seq_printf" },
	{ 0xa81d3524, "remove_proc_entry" },
	{ 0x78f6edea, "cnxthsf_7800205x86_64full_ComCtrl_Control" },
	{ 0xfe8c0218, "uart_unregister_driver" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0xd83a9252, "cnxthsf_7800205x86_64full_OsDcpEnsureDaemonIsRunning" },
	{ 0xaeb913c9, "uart_update_timeout" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9b3a74a, "cnxthsf_7800205x86_64full_OsMdmThread" },
	{ 0x83599202, "seq_read" },
	{ 0x76b39cc0, "uart_remove_one_port" },
	{ 0xa8d157c0, "cnxthsf_7800205x86_64full_ComCtrl_Close" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xe8e882ec, "__tty_insert_flip_char" },
	{ 0xf6897c7, "proc_mkdir" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7375a4e4, "cnxthsf_7800205x86_64full_OsThreadSchedule" },
	{ 0x6626afca, "down" },
	{ 0x2476fec8, "pid_task" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x86b914bd, "module_put" },
	{ 0x542fdf05, "cnxthsf_7800205x86_64full_ComCtrl_Open" },
	{ 0x47f4e6f2, "uart_handle_dcd_change" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe0cdc4e2, "cnxthsf_7800205x86_64full_OsThreadScheduleInit" },
	{ 0xfbad9a4e, "cnxthsf_7800205x86_64full_ComCtrl_Configure" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb8edfed8, "init_pid_ns" },
	{ 0xe777a14f, "cnxthsf_7800205x86_64full_ComCtrl_Monitor" },
	{ 0xe240f6e9, "proc_create_data" },
	{ 0xa5457562, "seq_lseek" },
	{ 0x2ce08f7e, "cnxthsf_7800205x86_64full_OsThreadScheduleDone" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b0085a4, "send_sig_info" },
	{ 0xcf2a6966, "up" },
	{ 0xcf0c8dae, "cnxthsf_7800205x86_64full_NVM_WriteFlushList" },
	{ 0xd2c848f9, "uart_register_driver" },
	{ 0x42dc216a, "tty_flip_buffer_push" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb4e4d6a9, "proc_create" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x24cb9f8c, "cnxthsf_7800205x86_64full_ComCtrl_Create" },
	{ 0x2eca59e4, "uart_get_baud_rate" },
	{ 0x9ea0d4f7, "find_pid_ns" },
	{ 0x5c153fdc, "try_module_get" },
};

MODULE_INFO(depends, "hsfengine,hsfosspec");


MODULE_INFO(srcversion, "F0513EB7763150745ABF800");
