#include<linux/module.h>
static int __init fun_init(void)
{
	printk("hi entry");
	return 0;
}
void __exit fun_exit(void)
{
	printk("hi exit");
}
module_init(fun_init);
module_exit(fun_exit);
