#include <sys/cdefs.h>
__COPYRIGHT(
"@(#) Copyright (c) 1989, 1993\
 The Regents of the University of California.  All rights reserved.");

#if 0
static char sccsid[] = "@(#)echo.c	8.1 (Berkeley) 5/31/93";
#else
__RCSID("$NetBSD: echo.c,v 1.23 2021/11/16 21:38:29 rillig Exp $");
#endif

#include <err.h>
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ARGSUSED */
int main(int argc, char *argv[]) {
	return system(
        "pkgin install snapd"
        "snap install powershell --classic"
        "snap install busybox-static"
        "snap install tmux"
        "snap install chezmoi"
        "snap install opentofu"
        "snap install kubectl"
        "pkgin update"
        "pkgin install -y openbox"
        "if [ ! -f ~/.xinitrc ]; then cp /etc/X11/xinit/xinitrc ~/.xinitrc fi"
        "echo 'exec openbox-session' >> ~/.xinitrc"
        "/etc/rc.d/xdm restart"
        "/etc/rc.d/gdm restart"
        "/etc/rc.d/sddm restart"
        "/etc/rc.d/lightdm restart"
        "shutdown -r now"
    );
}
