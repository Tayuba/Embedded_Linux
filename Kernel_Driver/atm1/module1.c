/*Call header files*/
#include<linux/module.h>
#include<linux/init.h>


// Meta Info
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ayuba Tahiru");
MODULE_DESCRIPTION("First kernel driver");


// Module Init function
static int __init moduleInit(void){

	printk("Welcome to Embedded Linux Kernel Repo\n");
    	printk("Kernel Module Inserted Successfully...\n");
    	return 0;
}

// Module Exit function
static void __exit moduleExit(void){
	printk("Goodbye, see you son\n");
    	printk("Kernel Module Removed Successfully...\n");
}

//Call of functions
module_init(moduleInit);
module_exit(moduleExit);
