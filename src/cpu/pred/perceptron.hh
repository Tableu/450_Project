#ifndef __CPU_PRED_PERCEPTRON_HH__
#define __CPU_PRED_PERCEPTRON_HH__

#include "cpu/pred/bpred_unit.hh"
#include "params/Perceptron.hh"

class Perceptron : public BPredUnit
{
    public:
        Perceptron(const PerceptronParams *params);

};

#endif // __CPU_PRED_PERCEPTRON_HH__