#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tcl.h>
 
extern "C" {
    // extern for C++.
    int Myimpltcl_Init(Tcl_Interp *Interp);
    int Myimpltcl_Unload(Tcl_Interp *Interp);
}
 
int Action_FuncA(int notUsed, Tcl_Interp *interp, int argc, char **argv) {
    if (argc != 3) {
        // check args, same as main function args.
        Tcl_SetResult(interp, "Usage::Action_FuncA arg1 arg2",
            TCL_VOLATILE);
        return TCL_ERROR;
    }
    printf("argv[1] is %s.\n", argv[1]);
    printf("argv[2] is %s.\n", argv[2]);
    // return string.
    Tcl_SetResult(interp, "return of Action_FuncA", TCL_VOLATILE);
    return TCL_OK;
}
 
int Action_FuncB(int notUsed, Tcl_Interp *interp, int argc, char **argv) {
    if (argc != 2) {
        // check args, same as main function args.
        Tcl_SetResult(interp, "Usage::Action_FuncB arg1",
            TCL_VOLATILE);
        return TCL_ERROR;
    }
    printf("argv[1] is %s.\n", argv[1]);
    // return string.
    Tcl_SetResult(interp, "return of Action_FuncB", TCL_VOLATILE);
    return TCL_OK;
}
 
int Myimpltcl_Init(Tcl_Interp *Interp) {
    // initialize operation.
    Tcl_CreateCommand (Interp, "Action_FuncA", (Tcl_CmdProc *)Action_FuncA, 0, 0);
    Tcl_CreateCommand (Interp, "Action_FuncB", (Tcl_CmdProc *)Action_FuncB, 0, 0);
    return TCL_OK;
}
 
int Myimpltcl_Unload(Tcl_Interp *Interp, int flags) {
    // destroy operation.
    return TCL_OK;
}