//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/bgpv4/BGPMessage/BGPHeader.msg.
//

#ifndef _BGPHEADER_M_H_
#define _BGPHEADER_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API 
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API 
#  endif
#endif

// cplusplus {{
const int BGP_HEADER_OCTETS = 19;
// }}



/**
 * Enum generated from <tt>networklayer/bgpv4/BGPMessage/BGPHeader.msg</tt> by opp_msgc.
 * <pre>
 * enum BGPType
 * {
 *     BGP_OPEN = 1;
 *     BGP_UPDATE = 2;
 *     BGP_NOTIFICATION = 3;
 *     BGP_KEEPALIVE = 4;
 * }
 * </pre>
 */
enum BGPType {
    BGP_OPEN = 1,
    BGP_UPDATE = 2,
    BGP_NOTIFICATION = 3,
    BGP_KEEPALIVE = 4
};

/**
 * Class generated from <tt>networklayer/bgpv4/BGPMessage/BGPHeader.msg</tt> by opp_msgc.
 * <pre>
 * packet BGPHeader
 * {
 *     byteLength = BGP_HEADER_OCTETS;
 *     char type @enum(BGPType);
 * }
 * </pre>
 */
class INET_API BGPHeader : public ::cPacket
{
  protected:
    char type_var;

  private:
    void copy(const BGPHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BGPHeader&);

  public:
    BGPHeader(const char *name=NULL, int kind=0);
    BGPHeader(const BGPHeader& other);
    virtual ~BGPHeader();
    BGPHeader& operator=(const BGPHeader& other);
    virtual BGPHeader *dup() const {return new BGPHeader(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual char getType() const;
    virtual void setType(char type);
};

inline void doPacking(cCommBuffer *b, BGPHeader& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BGPHeader& obj) {obj.parsimUnpack(b);}


#endif // _BGPHEADER_M_H_