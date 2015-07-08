//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/rsvp_te/RSVPPathMsg.msg.
//

#ifndef _RSVPPATHMSG_M_H_
#define _RSVPPATHMSG_M_H_

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
#include "IntServ.h"
#include "RSVPPacket.h"
// }}



/**
 * Class generated from <tt>networklayer/rsvp_te/RSVPPathMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet RSVPPathMsg extends RSVPPacket
 * {
 *     @customize(true);
 *     RsvpHopObj_t hop;
 *     LabelRequestObj_t label_request;
 *     SenderDescriptor_t sender_descriptor;
 *     EroVector ERO;
 *     int color;
 * 
 *     int rsvpKind = PATH_MESSAGE;
 * }
 * </pre>
 *
 * RSVPPathMsg_Base is only useful if it gets subclassed, and RSVPPathMsg is derived from it.
 * The minimum code to be written for RSVPPathMsg is the following:
 *
 * <pre>
 * class INET_API RSVPPathMsg : public RSVPPathMsg_Base
 * {
 *   private:
 *     void copy(const RSVPPathMsg& other) { ... }

 *   public:
 *     RSVPPathMsg(const char *name=NULL, int kind=0) : RSVPPathMsg_Base(name,kind) {}
 *     RSVPPathMsg(const RSVPPathMsg& other) : RSVPPathMsg_Base(other) {copy(other);}
 *     RSVPPathMsg& operator=(const RSVPPathMsg& other) {if (this==&other) return *this; RSVPPathMsg_Base::operator=(other); copy(other); return *this;}
 *     virtual RSVPPathMsg *dup() const {return new RSVPPathMsg(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RSVPPathMsg_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RSVPPathMsg);
 * </pre>
 */
class INET_API RSVPPathMsg_Base : public ::RSVPPacket
{
  protected:
    RsvpHopObj_t hop_var;
    LabelRequestObj_t label_request_var;
    SenderDescriptor_t sender_descriptor_var;
    EroVector ERO_var;
    int color_var;
    int rsvpKind_var;

  private:
    void copy(const RSVPPathMsg_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RSVPPathMsg_Base&);
    // make constructors protected to avoid instantiation
    RSVPPathMsg_Base(const char *name=NULL, int kind=0);
    RSVPPathMsg_Base(const RSVPPathMsg_Base& other);
    // make assignment operator protected to force the user override it
    RSVPPathMsg_Base& operator=(const RSVPPathMsg_Base& other);

  public:
    virtual ~RSVPPathMsg_Base();
    virtual RSVPPathMsg_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RSVPPathMsg");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual RsvpHopObj_t& getHop();
    virtual const RsvpHopObj_t& getHop() const {return const_cast<RSVPPathMsg_Base*>(this)->getHop();}
    virtual void setHop(const RsvpHopObj_t& hop);
    virtual LabelRequestObj_t& getLabel_request();
    virtual const LabelRequestObj_t& getLabel_request() const {return const_cast<RSVPPathMsg_Base*>(this)->getLabel_request();}
    virtual void setLabel_request(const LabelRequestObj_t& label_request);
    virtual SenderDescriptor_t& getSender_descriptor();
    virtual const SenderDescriptor_t& getSender_descriptor() const {return const_cast<RSVPPathMsg_Base*>(this)->getSender_descriptor();}
    virtual void setSender_descriptor(const SenderDescriptor_t& sender_descriptor);
    virtual EroVector& getERO();
    virtual const EroVector& getERO() const {return const_cast<RSVPPathMsg_Base*>(this)->getERO();}
    virtual void setERO(const EroVector& ERO);
    virtual int getColor() const;
    virtual void setColor(int color);
    virtual int getRsvpKind() const;
    virtual void setRsvpKind(int rsvpKind);
};

/**
 * Class generated from <tt>networklayer/rsvp_te/RSVPPathMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet RSVPPathTear extends RSVPPacket
 * {
 *     @customize(true);
 *     RsvpHopObj_t hop;
 *     SenderTemplateObj_t senderTemplate;
 *     bool force;
 *     int rsvpKind = PTEAR_MESSAGE;
 * }
 * </pre>
 *
 * RSVPPathTear_Base is only useful if it gets subclassed, and RSVPPathTear is derived from it.
 * The minimum code to be written for RSVPPathTear is the following:
 *
 * <pre>
 * class INET_API RSVPPathTear : public RSVPPathTear_Base
 * {
 *   private:
 *     void copy(const RSVPPathTear& other) { ... }

 *   public:
 *     RSVPPathTear(const char *name=NULL, int kind=0) : RSVPPathTear_Base(name,kind) {}
 *     RSVPPathTear(const RSVPPathTear& other) : RSVPPathTear_Base(other) {copy(other);}
 *     RSVPPathTear& operator=(const RSVPPathTear& other) {if (this==&other) return *this; RSVPPathTear_Base::operator=(other); copy(other); return *this;}
 *     virtual RSVPPathTear *dup() const {return new RSVPPathTear(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RSVPPathTear_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RSVPPathTear);
 * </pre>
 */
class INET_API RSVPPathTear_Base : public ::RSVPPacket
{
  protected:
    RsvpHopObj_t hop_var;
    SenderTemplateObj_t senderTemplate_var;
    bool force_var;
    int rsvpKind_var;

  private:
    void copy(const RSVPPathTear_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RSVPPathTear_Base&);
    // make constructors protected to avoid instantiation
    RSVPPathTear_Base(const char *name=NULL, int kind=0);
    RSVPPathTear_Base(const RSVPPathTear_Base& other);
    // make assignment operator protected to force the user override it
    RSVPPathTear_Base& operator=(const RSVPPathTear_Base& other);

  public:
    virtual ~RSVPPathTear_Base();
    virtual RSVPPathTear_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RSVPPathTear");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual RsvpHopObj_t& getHop();
    virtual const RsvpHopObj_t& getHop() const {return const_cast<RSVPPathTear_Base*>(this)->getHop();}
    virtual void setHop(const RsvpHopObj_t& hop);
    virtual SenderTemplateObj_t& getSenderTemplate();
    virtual const SenderTemplateObj_t& getSenderTemplate() const {return const_cast<RSVPPathTear_Base*>(this)->getSenderTemplate();}
    virtual void setSenderTemplate(const SenderTemplateObj_t& senderTemplate);
    virtual bool getForce() const;
    virtual void setForce(bool force);
    virtual int getRsvpKind() const;
    virtual void setRsvpKind(int rsvpKind);
};

/**
 * Class generated from <tt>networklayer/rsvp_te/RSVPPathMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet RSVPPathError extends RSVPPacket
 * {
 *     @customize(true);
 *     IPv4Address errorNode;
 *     int errorCode;
 *     SenderDescriptor_t sender_descriptor;
 * 
 *     int rsvpKind = PERROR_MESSAGE;
 * }
 * </pre>
 *
 * RSVPPathError_Base is only useful if it gets subclassed, and RSVPPathError is derived from it.
 * The minimum code to be written for RSVPPathError is the following:
 *
 * <pre>
 * class INET_API RSVPPathError : public RSVPPathError_Base
 * {
 *   private:
 *     void copy(const RSVPPathError& other) { ... }

 *   public:
 *     RSVPPathError(const char *name=NULL, int kind=0) : RSVPPathError_Base(name,kind) {}
 *     RSVPPathError(const RSVPPathError& other) : RSVPPathError_Base(other) {copy(other);}
 *     RSVPPathError& operator=(const RSVPPathError& other) {if (this==&other) return *this; RSVPPathError_Base::operator=(other); copy(other); return *this;}
 *     virtual RSVPPathError *dup() const {return new RSVPPathError(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RSVPPathError_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RSVPPathError);
 * </pre>
 */
class INET_API RSVPPathError_Base : public ::RSVPPacket
{
  protected:
    IPv4Address errorNode_var;
    int errorCode_var;
    SenderDescriptor_t sender_descriptor_var;
    int rsvpKind_var;

  private:
    void copy(const RSVPPathError_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RSVPPathError_Base&);
    // make constructors protected to avoid instantiation
    RSVPPathError_Base(const char *name=NULL, int kind=0);
    RSVPPathError_Base(const RSVPPathError_Base& other);
    // make assignment operator protected to force the user override it
    RSVPPathError_Base& operator=(const RSVPPathError_Base& other);

  public:
    virtual ~RSVPPathError_Base();
    virtual RSVPPathError_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RSVPPathError");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getErrorNode();
    virtual const IPv4Address& getErrorNode() const {return const_cast<RSVPPathError_Base*>(this)->getErrorNode();}
    virtual void setErrorNode(const IPv4Address& errorNode);
    virtual int getErrorCode() const;
    virtual void setErrorCode(int errorCode);
    virtual SenderDescriptor_t& getSender_descriptor();
    virtual const SenderDescriptor_t& getSender_descriptor() const {return const_cast<RSVPPathError_Base*>(this)->getSender_descriptor();}
    virtual void setSender_descriptor(const SenderDescriptor_t& sender_descriptor);
    virtual int getRsvpKind() const;
    virtual void setRsvpKind(int rsvpKind);
};


#endif // _RSVPPATHMSG_M_H_
