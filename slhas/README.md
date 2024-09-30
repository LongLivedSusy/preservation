SLHA templates given for the signal models.

Variable values are denoted by 

 * M0 : neutralino1 mass
 * M1 : chargino1 mass 
 * M2 : heavy sparticle (gluino, sbottom, stop or neutralino2) mass
 * W1 : chargino1 width (DECAY block for chargino1+)

For the models in paper, M0 and M1 are correlated, i.e. M1 = M0 + X, where X is defined by the lifetime.

M1 and W1 values for the ctau models used in the analysis:

 * ctau = 10 cm : M1 = M0 + 0.32485759 ; W1 = 1.97327052176253113e-15
 * ctau = 200 cm : M1 = M0 + 0.18288376 ; W1 = 0.9866600820631833e-16

Benchmarks:

 * T6tbLL ; msbottom, mneutralino1 = 1000, 900 , ctau = 10
 * T5btbtLL : mgluino, mneutralino1 = 1500, 1100 , ctau = 10
 * .... add more

Pure Higgsino model:

This model is a pMSSM-inspired full model generated directly via Pythia 8.
ctau per model point was calculated based on arXiv:1703.09675, eq 12.
Individual events are weighted based on the resulting decay lengths.

Pure wino model:

The same events generated with the pure Higgsino SLHA are taken as a base for this model. 
Events with chi20 in the production process are filtered at the analysis level.
ctau per model point was calculated based on arXiv:2210.16035, eq 3.1.
Individual events are weighted based on the resulting decay lengths.

