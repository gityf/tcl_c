# tcl_c
this is exterd for tcl implement by c.  tcl can load so.
```bash
[user@host tcl]# tclsh
% load libmyimpltcl.so
% # 加载编译好的so库
% info loaded
% # 查看加载过的库信息
{libmyimpltcl.so Myimpltcl}
% set ret [Action_FuncA param1 param2]
% # 调用so中的C函数Action_FuncA
argv[1] is param1.
argv[2] is param2.
return of Action_FuncA
% puts $ret
return of Action_FuncA
% set retB [Action_FuncB 123]
% # 调用so中的C函数Action_FuncB
argv[1] is 123.
return of Action_FuncB
% puts $retB
return of Action_FuncB
```