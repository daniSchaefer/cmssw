#ifndef L1T_PACKER_STAGE2_BMTFSETUP_H
#define L1T_PACKER_STAGE2_BMTFSETUP_H

#include "EventFilter/L1TRawToDigi/interface/Packer.h"
#include "EventFilter/L1TRawToDigi/interface/PackingSetup.h"
#include "EventFilter/L1TRawToDigi/interface/Unpacker.h"

#include "BMTFCollections.h"
#include "BMTFTokens.h"

namespace l1t {
   namespace stage2 {
      class BMTFSetup : public PackingSetup {
         public:
            virtual std::unique_ptr<PackerTokens> registerConsumes(const edm::ParameterSet& cfg, edm::ConsumesCollector& cc) override;
            virtual void fillDescription(edm::ParameterSetDescription& desc) override;
            virtual PackerMap getPackers(int fed, unsigned int fw) override;
            virtual void registerProducts(edm::stream::EDProducerBase& prod) override;
            virtual std::unique_ptr<UnpackerCollections> getCollections(edm::Event& e) override;
            virtual UnpackerMap getUnpackers(int fed, int board, int amc, unsigned int fw) override;
      };
   }
}

#endif
