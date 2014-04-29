//
// Generated file, do not edit! Created by opp_msgc 4.4 from interestto.msg.
//

#ifndef _INTERESTTO_M_H_
#define _INTERESTTO_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0404
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>interestto.msg</tt> by opp_msgc.
 * <pre>
 * message InterestTo
 * {
 *     string host;
 *     int port;
 *     string name;
 *     string toPrefix;
 *     bool isSend;
 * }
 * </pre>
 */
class InterestTo : public ::cMessage
{
  protected:
    opp_string host_var;
    int port_var;
    opp_string name_var;
    opp_string toPrefix_var;
    bool isSend_var;

  private:
    void copy(const InterestTo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const InterestTo&);

  public:
    InterestTo(const char *name=NULL, int kind=0);
    InterestTo(const InterestTo& other);
    virtual ~InterestTo();
    InterestTo& operator=(const InterestTo& other);
    virtual InterestTo *dup() const {return new InterestTo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getHost() const;
    virtual void setHost(const char * host);
    virtual int getPort() const;
    virtual void setPort(int port);
    virtual const char * getName() const;
    virtual void setName(const char * name);
    virtual const char * getToPrefix() const;
    virtual void setToPrefix(const char * toPrefix);
    virtual bool getIsSend() const;
    virtual void setIsSend(bool isSend);
};

inline void doPacking(cCommBuffer *b, InterestTo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, InterestTo& obj) {obj.parsimUnpack(b);}


#endif // _INTERESTTO_M_H_
