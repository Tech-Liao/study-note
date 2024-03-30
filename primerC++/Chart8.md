# IO

## IO类

![](https://gitee.com/tech-Hao/mac_picgo/raw/master/202403162330101.png)

其次还有**宽字节的IO:wcin,wcout和wcerr**与普通IO流对应.在标准库中,所有io类型的使用都可以忽略一些细节,而实现这种的机制叫做**继承机制**.即你想操作除cin,cout的其他流类型时,同操作cin,cout一样即可.

不能对io类型的变量进行拷贝,例如在函数传参时,只能用引用方式对io类型变量来操作,且参数不能设置为const.因为在操作流时总会发生状态变化.

