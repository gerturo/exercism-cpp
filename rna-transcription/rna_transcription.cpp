#include "rna_transcription.h"

namespace rna_transcription
{
    char to_rna(char dna_nucleotide)
    {
        switch (dna_nucleotide)
        {
        case 'G':
            return 'C';
        case 'C':
            return 'G';
        case 'T':
            return 'A';
        default: // 'A'
            return 'U';
        }
    }

    std::string to_rna(std::string dna_sequence)
    {
        std::string rna_sequence = "";

        for (std::string::size_type i = 0; i < dna_sequence.length(); i++)
        {
            rna_sequence += to_rna(dna_sequence[i]);
        }

        return rna_sequence;
    }
} // namespace rna_transcription
