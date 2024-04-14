# IO

## IO类

![](https://gitee.com/tech-Hao/mac_picgo/raw/master/202403162330101.png)

其次还有**宽字节的IO:wcin,wcout和wcerr**与普通IO流对应.在标准库中,所有io类型的使用都可以忽略一些细节,而实现这种的机制叫做**继承机制**.即你想操作除cin,cout的其他流类型时,同操作cin,cout一样即可.

不能对io类型的变量进行拷贝,例如在函数传参时,只能用引用方式对io类型变量来操作,且参数不能设置为const.因为在操作流时总会发生状态变化.

IO条件状态:

![image-20240319074215522](https://gitee.com/tech-Hao/mac_picgo/raw/master/202403190742763.png)

badbit表示系统级错误,不可修复的错误,一旦被置位就无法使用io.failbit表示可恢复错误,错误被修正后可继续使用io.

当badbit,failbit,eofbit被置位,作为条件的io流都会被判错.



## 文件IO

## string流
