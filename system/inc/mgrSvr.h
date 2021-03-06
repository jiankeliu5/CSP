#ifndef __MGRSVR_H__
#define __MGRSVR_H__

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/reboot.h>
#include <fcntl.h>
#include <termios.h>
#include <string.h>
#include <signal.h>
#include <linux/lp.h>
#include <ctype.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <time.h>
#include <stdarg.h>

///////////////////////////
#include "gmnTypes.h"
#include "hsm.h"
#include "mgrIcCard.h"
#include "secDaemon.h"
#include "rclShm.h"
#include "rclConfig.h"
#include "rclKeyStore.h"
#include "monSvr.h"
#include "mgrProcess.h"
#include "mgrOpenPort.h"
#include "mgrCmd.h"
#include "v24Utils.h"
#include "comAsync.h"
#include "secTools.h"
#include "tcpSvr.h"
#include "icCpuCard.h"
#include "hstDataCard.h"
#include "ic_head.h"
#include "mwcpu.h"
#include "gmnKstoreNvram.h"
#include "gmnKstoreLpsram.h"
#include "secParity.h"
#include "pboc.h"
#include "rclPBOC.h"
#include "secAlgo.h"
#include "gmnCryptoApi.h"
#include "secPack.h"
#include "PlxApi.h"
#include "mgrGemen.h"
#include "keymgr.h"
#include "secFormat.h"

#endif
