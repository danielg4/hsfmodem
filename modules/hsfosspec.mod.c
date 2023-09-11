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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x677e712, "kernel_write" },
	{ 0x696f0c3, "kmalloc_caches" },
	{ 0xfe9fcba1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf0b60d44, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf9418c06, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x45a7cdeb, "pci_read_config_byte" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x97e2789a, "commit_creds" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5a7cfaec, "touch_atime" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x73dc96bd, "usb_kill_urb" },
	{ 0x2c5fa45b, "device_destroy" },
	{ 0x23295fe0, "__register_chrdev" },
	{ 0xb3f5e170, "filp_close" },
	{ 0xb6ab2f08, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xca666cb7, "usb_unlink_urb" },
	{ 0x33a21a09, "pv_ops" },
	{ 0xd10a0a5f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x119bae96, "kernel_read" },
	{ 0xb24af53b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa22a96f7, "current_task" },
	{ 0x2e2b40d2, "strncat" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x8a23e3a5, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde80cd09, "ioremap" },
	{ 0xd78f3a8f, "__kthread_init_worker" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9166fada, "strncpy" },
	{ 0x474ca6ac, "fasync_helper" },
	{ 0xcc7ef1da, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0x648d9e84, "pci_read_config_word" },
	{ 0x6626afca, "down" },
	{ 0x7ac22d2b, "device_create" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x11bab86, "prepare_creds" },
	{ 0x61651be, "strcat" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x86b914bd, "module_put" },
	{ 0xbd70750d, "usb_submit_urb" },
	{ 0xbf30d49d, "kthread_queue_work" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0xa916b694, "strnlen" },
	{ 0xb69116d1, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa760101, "usb_reset_device" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x29d6a295, "usb_clear_halt" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x559bf800, "pci_read_config_dword" },
	{ 0xd8a3409a, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4f00afd3, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x148653, "vsnprintf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0xb3f0559, "class_destroy" },
	{ 0xbb776539, "kill_fasync" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x52ea150d, "__class_create" },
	{ 0x78b887ed, "vsprintf" },
	{ 0x88bce085, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5c153fdc, "try_module_get" },
	{ 0x1f861c5f, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc4cc42af, "filp_open" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19F425C8C536900286224B1");
