#ifndef XAMIDI_METAMATH_DRULEREDUCER_H
#define XAMIDI_METAMATH_DRULEREDUCER_H

#include <string>

namespace xamidi {
namespace metamath {

struct DRuleReducer {
	static void createReplacementsFile(const std::string& dProofDB = "data/pmproofs.txt", const std::string& outputFile = "data/pmproofs-reducer.txt", const std::string& dataLocation = "data", const std::string& inputFilePrefix = "dProofs-withConclusions/dProofs", bool withConclusions = true, bool debug = false);
	static void applyReplacements(const std::string& initials, const std::string& replacementsFile = "data/pmproofs-reducer.txt", const std::string& dProofDB = "data/pmproofs.txt", const std::string& outputFile = "data/pmproofs-result.txt", bool styleAll = false, bool listAll = true, bool wrap = true, bool debug = false);
};

}
}

#endif // XAMIDI_METAMATH_DRULEREDUCER_H
