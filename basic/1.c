#include<linux/module.h>
static int __init hello_world_init(void)
{
	printk("hello world entry");
	return 0;
}
void __exit hello_world_exit(void)
{
	printk("hello world exit");
}
module_init(hello_world_init);
module_exit(hello_world_exit);

