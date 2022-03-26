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
	{ 0x8e6402a9, "module_layout" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xfe5cf5ad, "cdev_del" },
	{ 0xc0fdf3d5, "cdev_add" },
	{ 0xf4161c9f, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa916b694, "strnlen" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A6DD20E961D6870076EBA6A");
