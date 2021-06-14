
#ifndef WIN_USB_H
#define WIN_USB_H
#include <windows.h>
#include <winnt.h>
#include <winusb.h>
enum _DEVPROPSTORE {
    DEVPROP_STORE_SYSTEM,
    DEVPROP_STORE_USER
} DEVPROPSTORE, *PDEVPROPSTORE;
#include <setupapi.h>

#endif
