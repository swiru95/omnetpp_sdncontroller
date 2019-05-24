//
// Generated file, do not edit! Created by nedtool 5.4 from openflowmessages/ofp_vendor.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET_OFP_VENDOR_M_H
#define __INET_OFP_VENDOR_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {

class Ofp_vendor;
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/Units_m.h" // import inet.common.Units

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace inet {

/**
 * Enum generated from <tt>openflowmessages/ofp_vendor.msg:20</tt> by nedtool.
 * <pre>
 * enum vendors
 * {
 * }
 * </pre>
 */
enum vendors {
};

/**
 * Class generated from <tt>openflowmessages/ofp_vendor.msg:24</tt> by nedtool.
 * <pre>
 * class Ofp_vendor extends FieldsChunk
 * {
 *     uint32_t vendor;
 *     chunkLength = B(4);
 * }
 * </pre>
 */
class Ofp_vendor : public ::inet::FieldsChunk
{
  protected:
    uint32_t vendor = 0;

  private:
    void copy(const Ofp_vendor& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ofp_vendor&);

  public:
    Ofp_vendor();
    Ofp_vendor(const Ofp_vendor& other);
    virtual ~Ofp_vendor();
    Ofp_vendor& operator=(const Ofp_vendor& other);
    virtual Ofp_vendor *dup() const override {return new Ofp_vendor(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint32_t getVendor() const;
    virtual void setVendor(uint32_t vendor);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ofp_vendor& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ofp_vendor& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_OFP_VENDOR_M_H
