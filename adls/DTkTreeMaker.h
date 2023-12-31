//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Apr  4 12:27:21 2023 by ROOT version 6.24/08
// from TTree PreSelection/PreSelection
// found on file: Run2016B-17Jul2018_ver2-v1.METAOD_90000-BCA4BDEF-639F-E711-97DF-008CFAE45430_RA2AnalysisTree.root
//////////////////////////////////////////////////////////

#ifndef DT_h
#define DT_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class DT {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          RunNum;
   UInt_t          LumiBlockNum;
   ULong64_t       EvtNum;
   Bool_t          BadChargedCandidateFilter;
   Bool_t          BadPFMuonFilter;
   Int_t           BTags;
   Int_t           BTagsclean;
   Int_t           BTagsDeepCSV;
   Int_t           BTagsDeepCSVclean;
   Double_t        CaloMET;
   Double_t        CaloMETPhi;
   Int_t           CSCTightHaloFilter;
   Double_t        DeltaPhi1;
   Double_t        DeltaPhi12p4;
   Double_t        DeltaPhi1_AK8;
   Double_t        DeltaPhi1clean;
   Double_t        DeltaPhi1clean2p4;
   Double_t        DeltaPhi2;
   Double_t        DeltaPhi22p4;
   Double_t        DeltaPhi2_AK8;
   Double_t        DeltaPhi2clean;
   Double_t        DeltaPhi2clean2p4;
   Double_t        DeltaPhi3;
   Double_t        DeltaPhi32p4;
   Double_t        DeltaPhi3clean;
   Double_t        DeltaPhi3clean2p4;
   Double_t        DeltaPhi4;
   Double_t        DeltaPhi42p4;
   Double_t        DeltaPhi4clean;
   Double_t        DeltaPhi4clean2p4;
   Double_t        DeltaPhiMin_AK8;
   Int_t           ecalBadCalibFilter;
   Int_t           EcalDeadCellTriggerPrimitiveFilter;
   Int_t           eeBadScFilter;
   vector<TLorentzVector> *Electrons;
   vector<int>     *Electrons_charge;
   vector<double>  *Electrons_EnergyCorr;
   vector<bool>    *Electrons_mediumID;
   vector<double>  *Electrons_MiniIso;
   vector<double>  *Electrons_MT2Activity;
   vector<double>  *Electrons_MTW;
   vector<bool>    *Electrons_passIso;
   vector<bool>    *Electrons_tightID;
   vector<double>  *Electrons_TrkEnergyCorr;
   Int_t           globalSuperTightHalo2016Filter;
   Int_t           globalTightHalo2016Filter;
   Bool_t          hasGenPromptPhoton;
   Int_t           HBHEIsoNoiseFilter;
   Int_t           HBHENoiseFilter;
   Double_t        HT;
   Double_t        HT5;
   Double_t        HT5clean;
   Double_t        HTclean;
   Double_t        HTOnline;
   Int_t           isoElectronTracks;
   Int_t           isoElectronTracksclean;
   Int_t           isoMuonTracks;
   Int_t           isoMuonTracksclean;
   Int_t           isoPionTracks;
   Int_t           isoPionTracksclean;
   Bool_t          JetID;
   Bool_t          JetIDAK8;
   Bool_t          JetIDAK8Clean;
   Bool_t          JetIDclean;
   vector<TLorentzVector> *Jets;
   vector<double>  *Jets_axismajor;
   vector<double>  *Jets_axisminor;
   vector<double>  *Jets_bDiscriminatorCSV;
   vector<double>  *Jets_bJetTagDeepCSVBvsAll;
   vector<double>  *Jets_bJetTagDeepCSVCvsB;
   vector<double>  *Jets_bJetTagDeepCSVCvsL;
   vector<double>  *Jets_bJetTagDeepCSVprobb;
   vector<double>  *Jets_bJetTagDeepCSVprobbb;
   vector<double>  *Jets_bJetTagDeepCSVprobc;
   vector<double>  *Jets_bJetTagDeepCSVprobudsg;
   vector<double>  *Jets_bJetTagDeepFlavourprobb;
   vector<double>  *Jets_bJetTagDeepFlavourprobbb;
   vector<double>  *Jets_bJetTagDeepFlavourprobc;
   vector<double>  *Jets_bJetTagDeepFlavourprobg;
   vector<double>  *Jets_bJetTagDeepFlavourproblepb;
   vector<double>  *Jets_bJetTagDeepFlavourprobuds;
   vector<double>  *Jets_chargedEmEnergyFraction;
   vector<double>  *Jets_chargedHadronEnergyFraction;
   vector<int>     *Jets_chargedHadronMultiplicity;
   vector<int>     *Jets_chargedMultiplicity;
   vector<double>  *Jets_electronEnergyFraction;
   vector<int>     *Jets_electronMultiplicity;
   vector<int>     *Jets_hadronFlavor;
   vector<double>  *Jets_hfEMEnergyFraction;
   vector<double>  *Jets_hfHadronEnergyFraction;
   vector<bool>    *Jets_HTMask;
   vector<bool>    *Jets_ID;
   vector<double>  *Jets_jecFactor;
   vector<double>  *Jets_jecUnc;
   vector<bool>    *Jets_LeptonMask;
   vector<bool>    *Jets_MHT2p4Mask;
   vector<bool>    *Jets_MHTMask;
   vector<int>     *Jets_multiplicity;
   vector<double>  *Jets_muonEnergyFraction;
   vector<int>     *Jets_muonMultiplicity;
   vector<double>  *Jets_neutralEmEnergyFraction;
   vector<double>  *Jets_neutralHadronEnergyFraction;
   vector<int>     *Jets_neutralHadronMultiplicity;
   vector<int>     *Jets_neutralMultiplicity;
   vector<int>     *Jets_partonFlavor;
   vector<double>  *Jets_photonEnergyFraction;
   vector<int>     *Jets_photonMultiplicity;
   vector<double>  *Jets_ptD;
   vector<double>  *Jets_qgLikelihood;
   vector<TLorentzVector> *JetsAK8;
   vector<double>  *JetsAK8_axismajor;
   vector<double>  *JetsAK8_axisminor;
   vector<double>  *JetsAK8_chargedEmEnergyFraction;
   vector<double>  *JetsAK8_chargedHadronEnergyFraction;
   vector<int>     *JetsAK8_chargedHadronMultiplicity;
   vector<int>     *JetsAK8_chargedMultiplicity;
   vector<double>  *JetsAK8_deepDoubleBDiscriminatorH;
   vector<double>  *JetsAK8_deepDoubleBDiscriminatorQ;
   vector<double>  *JetsAK8_doubleBDiscriminator;
   vector<double>  *JetsAK8_ecfN2b1;
   vector<double>  *JetsAK8_ecfN2b2;
   vector<double>  *JetsAK8_ecfN3b1;
   vector<double>  *JetsAK8_ecfN3b2;
   vector<double>  *JetsAK8_electronEnergyFraction;
   vector<int>     *JetsAK8_electronMultiplicity;
   vector<double>  *JetsAK8_girth;
   vector<double>  *JetsAK8_hDiscriminatorDeep;
   vector<double>  *JetsAK8_hfEMEnergyFraction;
   vector<double>  *JetsAK8_hfHadronEnergyFraction;
   vector<bool>    *JetsAK8_ID;
   vector<double>  *JetsAK8_jecFactor;
   vector<double>  *JetsAK8_jecUnc;
   vector<double>  *JetsAK8_lean;
   vector<double>  *JetsAK8_momenthalf;
   vector<int>     *JetsAK8_multiplicity;
   vector<double>  *JetsAK8_muonEnergyFraction;
   vector<int>     *JetsAK8_muonMultiplicity;
   vector<double>  *JetsAK8_neutralEmEnergyFraction;
   vector<double>  *JetsAK8_neutralHadronEnergyFraction;
   vector<int>     *JetsAK8_neutralHadronMultiplicity;
   vector<int>     *JetsAK8_neutralMultiplicity;
   vector<double>  *JetsAK8_NsubjettinessTau1;
   vector<double>  *JetsAK8_NsubjettinessTau2;
   vector<double>  *JetsAK8_NsubjettinessTau3;
   vector<int>     *JetsAK8_NumBhadrons;
   vector<int>     *JetsAK8_NumChadrons;
   vector<double>  *JetsAK8_photonEnergyFraction;
   vector<int>     *JetsAK8_photonMultiplicity;
   vector<double>  *JetsAK8_prunedMass;
   vector<double>  *JetsAK8_ptD;
   vector<double>  *JetsAK8_ptdrlog;
   vector<double>  *JetsAK8_softDropMass;
   vector<vector<TLorentzVector> > *JetsAK8_subjets;
   vector<vector<double> > *JetsAK8_subjets_axismajor;
   vector<vector<double> > *JetsAK8_subjets_axisminor;
   vector<vector<double> > *JetsAK8_subjets_bDiscriminatorCSV;
   vector<vector<int> > *JetsAK8_subjets_multiplicity;
   vector<vector<double> > *JetsAK8_subjets_ptD;
   vector<double>  *JetsAK8_tDiscriminatorDeep;
   vector<double>  *JetsAK8_tDiscriminatorDeepDecorrel;
   vector<double>  *JetsAK8_wDiscriminatorDeep;
   vector<double>  *JetsAK8_wDiscriminatorDeepDecorrel;
   vector<double>  *JetsAK8_zDiscriminatorDeep;
   vector<double>  *JetsAK8_zhDiscriminatorDeepDecorrel;
   vector<TLorentzVector> *JetsAK8Clean;
   vector<double>  *JetsAK8Clean_doubleBDiscriminator;
   vector<bool>    *JetsAK8Clean_ID;
   vector<double>  *JetsAK8Clean_NsubjettinessTau1;
   vector<double>  *JetsAK8Clean_NsubjettinessTau2;
   vector<double>  *JetsAK8Clean_NsubjettinessTau3;
   vector<int>     *JetsAK8Clean_NumBhadrons;
   vector<int>     *JetsAK8Clean_NumChadrons;
   vector<double>  *JetsAK8Clean_prunedMass;
   vector<double>  *JetsAK8Clean_softDropMass;
   vector<vector<TLorentzVector> > *JetsAK8Clean_subjets;
   vector<vector<double> > *JetsAK8Clean_subjets_bDiscriminatorCSV;
   vector<TLorentzVector> *Jetsclean;
   vector<double>  *Jetsclean_bDiscriminatorCSV;
   vector<double>  *Jetsclean_bJetTagDeepCSVBvsAll;
   vector<double>  *Jetsclean_bJetTagDeepCSVCvsB;
   vector<double>  *Jetsclean_bJetTagDeepCSVCvsL;
   vector<double>  *Jetsclean_bJetTagDeepCSVprobb;
   vector<double>  *Jetsclean_bJetTagDeepCSVprobbb;
   vector<double>  *Jetsclean_bJetTagDeepCSVprobc;
   vector<double>  *Jetsclean_bJetTagDeepCSVprobudsg;
   vector<double>  *Jetsclean_bJetTagDeepFlavourprobb;
   vector<double>  *Jetsclean_bJetTagDeepFlavourprobbb;
   vector<double>  *Jetsclean_bJetTagDeepFlavourprobc;
   vector<double>  *Jetsclean_bJetTagDeepFlavourprobg;
   vector<double>  *Jetsclean_bJetTagDeepFlavourproblepb;
   vector<double>  *Jetsclean_bJetTagDeepFlavourprobuds;
   vector<double>  *Jetsclean_chargedHadronEnergyFraction;
   vector<int>     *Jetsclean_hadronFlavor;
   vector<bool>    *Jetsclean_HTMask;
   vector<bool>    *Jetsclean_ID;
   vector<bool>    *Jetsclean_MHT2p4Mask;
   vector<bool>    *Jetsclean_MHTMask;
   vector<double>  *Jetsclean_muonEnergyFraction;
   vector<int>     *Jetsclean_partonFlavor;
   Double_t        MET;
   Double_t        METclean;
   Double_t        METPhi;
   Double_t        METPhiclean;
   Double_t        METSignificance;
   Double_t        METSignificanceclean;
   Double_t        MHT;
   Double_t        MHT2p4;
   Double_t        MHTclean;
   Double_t        MHTclean2p4;
   Double_t        MHTOnline;
   Double_t        MHTPhi;
   Double_t        MHTPhi2p4;
   Double_t        MHTPhiclean;
   Double_t        MHTPhiclean2p4;
   Double_t        MJJ_AK8;
   Double_t        Mmc_AK8;
   Double_t        MT2;
   Double_t        MT_AK8;
   vector<TLorentzVector> *Muons;
   vector<int>     *Muons_charge;
   vector<bool>    *Muons_mediumID;
   vector<double>  *Muons_MiniIso;
   vector<double>  *Muons_MT2Activity;
   vector<double>  *Muons_MTW;
   vector<bool>    *Muons_passIso;
   vector<bool>    *Muons_tightID;
   Int_t           nAllVertices;
   Int_t           NElectrons;
   Int_t           NJets;
   Int_t           NJetsclean;
   Int_t           NMuons;
   Int_t           NVtx;
   Double_t        PFCaloMETRatio;
   vector<TLorentzVector> *Photons;
   vector<bool>    *Photons_electronFakes;
   vector<bool>    *Photons_fullID;
   vector<double>  *Photons_genMatched;
   vector<double>  *Photons_hadTowOverEM;
   vector<double>  *Photons_hasPixelSeed;
   vector<double>  *Photons_isEB;
   vector<bool>    *Photons_nonPrompt;
   vector<double>  *Photons_passElectronVeto;
   vector<double>  *Photons_pfChargedIso;
   vector<double>  *Photons_pfChargedIsoRhoCorr;
   vector<double>  *Photons_pfGammaIso;
   vector<double>  *Photons_pfGammaIsoRhoCorr;
   vector<double>  *Photons_pfNeutralIso;
   vector<double>  *Photons_pfNeutralIsoRhoCorr;
   vector<double>  *Photons_sigmaIetaIeta;
   Double_t        PrescaleWeightHT;
   Int_t           PrimaryVertexFilter;
   vector<TLorentzVector> *TAPElectronTracks;
   vector<double>  *TAPElectronTracks_activity;
   vector<int>     *TAPElectronTracks_charge;
   vector<double>  *TAPElectronTracks_mT;
   vector<double>  *TAPElectronTracks_trkiso;
   vector<TLorentzVector> *TAPMuonTracks;
   vector<double>  *TAPMuonTracks_activity;
   vector<int>     *TAPMuonTracks_charge;
   vector<double>  *TAPMuonTracks_mT;
   vector<double>  *TAPMuonTracks_trkiso;
   vector<TLorentzVector> *TAPPionTracks;
   vector<double>  *TAPPionTracks_activity;
   vector<int>     *TAPPionTracks_charge;
   vector<double>  *TAPPionTracks_mT;
   vector<double>  *TAPPionTracks_trkiso;
   vector<TLorentzVector> *tracks;
   vector<int>     *tracks_charge;
   vector<double>  *tracks_chargedPtSum;
   vector<double>  *tracks_chi2perNdof;
   vector<double>  *tracks_deDxHarmonic2pixel;
   vector<double>  *tracks_deDxHarmonic2strips;
   vector<double>  *tracks_dxyVtx;
   vector<double>  *tracks_dzVtx;
   vector<double>  *tracks_matchedCaloEnergy;
   vector<double>  *tracks_matchedCaloEnergyJets;
   vector<double>  *tracks_minDrLepton;
   vector<double>  *tracks_neutralPtSum;
   vector<double>  *tracks_neutralWithoutGammaPtSum;
   vector<int>     *tracks_nMissingInnerHits;
   vector<int>     *tracks_nMissingMiddleHits;
   vector<int>     *tracks_nMissingOuterHits;
   vector<int>     *tracks_nValidPixelHits;
   vector<int>     *tracks_nValidTrackerHits;
   vector<bool>    *tracks_passExo16044DeadNoisyECALVeto;
   vector<bool>    *tracks_passExo16044GapsVeto;
   vector<bool>    *tracks_passExo16044JetIso;
   vector<bool>    *tracks_passExo16044LepIso;
   vector<bool>    *tracks_passExo16044Tag;
   vector<bool>    *tracks_passPFCandVeto;
   vector<int>     *tracks_pixelLayersWithMeasurement;
   vector<double>  *tracks_ptError;
   vector<int>     *tracks_trackerLayersWithMeasurement;
   vector<double>  *tracks_trackJetIso;
   vector<bool>    *tracks_trackQualityConfirmed;
   vector<bool>    *tracks_trackQualityDiscarded;
   vector<bool>    *tracks_trackQualityGoodIterative;
   vector<bool>    *tracks_trackQualityHighPurity;
   vector<bool>    *tracks_trackQualityHighPuritySetWithPV;
   vector<bool>    *tracks_trackQualityLoose;
   vector<bool>    *tracks_trackQualityLooseSetWithPV;
   vector<bool>    *tracks_trackQualitySize;
   vector<bool>    *tracks_trackQualityTight;
   vector<bool>    *tracks_trackQualityUndef;
   vector<double>  *tracks_trkMiniRelIso;
   vector<double>  *tracks_trkRelIso;
   vector<string>  *TriggerNames;
   vector<int>     *TriggerPass;
   vector<int>     *TriggerPrescales;
   vector<int>     *TriggerVersion;
   vector<TLorentzVector> *ZCandidates;

   // List of branches
   TBranch        *b_RunNum;   //!
   TBranch        *b_LumiBlockNum;   //!
   TBranch        *b_EvtNum;   //!
   TBranch        *b_BadChargedCandidateFilter;   //!
   TBranch        *b_BadPFMuonFilter;   //!
   TBranch        *b_BTags;   //!
   TBranch        *b_BTagsclean;   //!
   TBranch        *b_BTagsDeepCSV;   //!
   TBranch        *b_BTagsDeepCSVclean;   //!
   TBranch        *b_CaloMET;   //!
   TBranch        *b_CaloMETPhi;   //!
   TBranch        *b_CSCTightHaloFilter;   //!
   TBranch        *b_DeltaPhi1;   //!
   TBranch        *b_DeltaPhi12p4;   //!
   TBranch        *b_DeltaPhi1_AK8;   //!
   TBranch        *b_DeltaPhi1clean;   //!
   TBranch        *b_DeltaPhi1clean2p4;   //!
   TBranch        *b_DeltaPhi2;   //!
   TBranch        *b_DeltaPhi22p4;   //!
   TBranch        *b_DeltaPhi2_AK8;   //!
   TBranch        *b_DeltaPhi2clean;   //!
   TBranch        *b_DeltaPhi2clean2p4;   //!
   TBranch        *b_DeltaPhi3;   //!
   TBranch        *b_DeltaPhi32p4;   //!
   TBranch        *b_DeltaPhi3clean;   //!
   TBranch        *b_DeltaPhi3clean2p4;   //!
   TBranch        *b_DeltaPhi4;   //!
   TBranch        *b_DeltaPhi42p4;   //!
   TBranch        *b_DeltaPhi4clean;   //!
   TBranch        *b_DeltaPhi4clean2p4;   //!
   TBranch        *b_DeltaPhiMin_AK8;   //!
   TBranch        *b_ecalBadCalibFilter;   //!
   TBranch        *b_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_eeBadScFilter;   //!
   TBranch        *b_Electrons;   //!
   TBranch        *b_Electrons_charge;   //!
   TBranch        *b_Electrons_EnergyCorr;   //!
   TBranch        *b_Electrons_mediumID;   //!
   TBranch        *b_Electrons_MiniIso;   //!
   TBranch        *b_Electrons_MT2Activity;   //!
   TBranch        *b_Electrons_MTW;   //!
   TBranch        *b_Electrons_passIso;   //!
   TBranch        *b_Electrons_tightID;   //!
   TBranch        *b_Electrons_TrkEnergyCorr;   //!
   TBranch        *b_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_globalTightHalo2016Filter;   //!
   TBranch        *b_hasGenPromptPhoton;   //!
   TBranch        *b_HBHEIsoNoiseFilter;   //!
   TBranch        *b_HBHENoiseFilter;   //!
   TBranch        *b_HT;   //!
   TBranch        *b_HT5;   //!
   TBranch        *b_HT5clean;   //!
   TBranch        *b_HTclean;   //!
   TBranch        *b_HTOnline;   //!
   TBranch        *b_isoElectronTracks;   //!
   TBranch        *b_isoElectronTracksclean;   //!
   TBranch        *b_isoMuonTracks;   //!
   TBranch        *b_isoMuonTracksclean;   //!
   TBranch        *b_isoPionTracks;   //!
   TBranch        *b_isoPionTracksclean;   //!
   TBranch        *b_JetID;   //!
   TBranch        *b_JetIDAK8;   //!
   TBranch        *b_JetIDAK8Clean;   //!
   TBranch        *b_JetIDclean;   //!
   TBranch        *b_Jets;   //!
   TBranch        *b_Jets_axismajor;   //!
   TBranch        *b_Jets_axisminor;   //!
   TBranch        *b_Jets_bDiscriminatorCSV;   //!
   TBranch        *b_Jets_bJetTagDeepCSVBvsAll;   //!
   TBranch        *b_Jets_bJetTagDeepCSVCvsB;   //!
   TBranch        *b_Jets_bJetTagDeepCSVCvsL;   //!
   TBranch        *b_Jets_bJetTagDeepCSVprobb;   //!
   TBranch        *b_Jets_bJetTagDeepCSVprobbb;   //!
   TBranch        *b_Jets_bJetTagDeepCSVprobc;   //!
   TBranch        *b_Jets_bJetTagDeepCSVprobudsg;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobb;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobbb;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobc;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobg;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourproblepb;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobuds;   //!
   TBranch        *b_Jets_chargedEmEnergyFraction;   //!
   TBranch        *b_Jets_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jets_chargedHadronMultiplicity;   //!
   TBranch        *b_Jets_chargedMultiplicity;   //!
   TBranch        *b_Jets_electronEnergyFraction;   //!
   TBranch        *b_Jets_electronMultiplicity;   //!
   TBranch        *b_Jets_hadronFlavor;   //!
   TBranch        *b_Jets_hfEMEnergyFraction;   //!
   TBranch        *b_Jets_hfHadronEnergyFraction;   //!
   TBranch        *b_Jets_HTMask;   //!
   TBranch        *b_Jets_ID;   //!
   TBranch        *b_Jets_jecFactor;   //!
   TBranch        *b_Jets_jecUnc;   //!
   TBranch        *b_Jets_LeptonMask;   //!
   TBranch        *b_Jets_MHT2p4Mask;   //!
   TBranch        *b_Jets_MHTMask;   //!
   TBranch        *b_Jets_multiplicity;   //!
   TBranch        *b_Jets_muonEnergyFraction;   //!
   TBranch        *b_Jets_muonMultiplicity;   //!
   TBranch        *b_Jets_neutralEmEnergyFraction;   //!
   TBranch        *b_Jets_neutralHadronEnergyFraction;   //!
   TBranch        *b_Jets_neutralHadronMultiplicity;   //!
   TBranch        *b_Jets_neutralMultiplicity;   //!
   TBranch        *b_Jets_partonFlavor;   //!
   TBranch        *b_Jets_photonEnergyFraction;   //!
   TBranch        *b_Jets_photonMultiplicity;   //!
   TBranch        *b_Jets_ptD;   //!
   TBranch        *b_Jets_qgLikelihood;   //!
   TBranch        *b_JetsAK8;   //!
   TBranch        *b_JetsAK8_axismajor;   //!
   TBranch        *b_JetsAK8_axisminor;   //!
   TBranch        *b_JetsAK8_chargedEmEnergyFraction;   //!
   TBranch        *b_JetsAK8_chargedHadronEnergyFraction;   //!
   TBranch        *b_JetsAK8_chargedHadronMultiplicity;   //!
   TBranch        *b_JetsAK8_chargedMultiplicity;   //!
   TBranch        *b_JetsAK8_deepDoubleBDiscriminatorH;   //!
   TBranch        *b_JetsAK8_deepDoubleBDiscriminatorQ;   //!
   TBranch        *b_JetsAK8_doubleBDiscriminator;   //!
   TBranch        *b_JetsAK8_ecfN2b1;   //!
   TBranch        *b_JetsAK8_ecfN2b2;   //!
   TBranch        *b_JetsAK8_ecfN3b1;   //!
   TBranch        *b_JetsAK8_ecfN3b2;   //!
   TBranch        *b_JetsAK8_electronEnergyFraction;   //!
   TBranch        *b_JetsAK8_electronMultiplicity;   //!
   TBranch        *b_JetsAK8_girth;   //!
   TBranch        *b_JetsAK8_hDiscriminatorDeep;   //!
   TBranch        *b_JetsAK8_hfEMEnergyFraction;   //!
   TBranch        *b_JetsAK8_hfHadronEnergyFraction;   //!
   TBranch        *b_JetsAK8_ID;   //!
   TBranch        *b_JetsAK8_jecFactor;   //!
   TBranch        *b_JetsAK8_jecUnc;   //!
   TBranch        *b_JetsAK8_lean;   //!
   TBranch        *b_JetsAK8_momenthalf;   //!
   TBranch        *b_JetsAK8_multiplicity;   //!
   TBranch        *b_JetsAK8_muonEnergyFraction;   //!
   TBranch        *b_JetsAK8_muonMultiplicity;   //!
   TBranch        *b_JetsAK8_neutralEmEnergyFraction;   //!
   TBranch        *b_JetsAK8_neutralHadronEnergyFraction;   //!
   TBranch        *b_JetsAK8_neutralHadronMultiplicity;   //!
   TBranch        *b_JetsAK8_neutralMultiplicity;   //!
   TBranch        *b_JetsAK8_NsubjettinessTau1;   //!
   TBranch        *b_JetsAK8_NsubjettinessTau2;   //!
   TBranch        *b_JetsAK8_NsubjettinessTau3;   //!
   TBranch        *b_JetsAK8_NumBhadrons;   //!
   TBranch        *b_JetsAK8_NumChadrons;   //!
   TBranch        *b_JetsAK8_photonEnergyFraction;   //!
   TBranch        *b_JetsAK8_photonMultiplicity;   //!
   TBranch        *b_JetsAK8_prunedMass;   //!
   TBranch        *b_JetsAK8_ptD;   //!
   TBranch        *b_JetsAK8_ptdrlog;   //!
   TBranch        *b_JetsAK8_softDropMass;   //!
   TBranch        *b_JetsAK8_subjets;   //!
   TBranch        *b_JetsAK8_subjets_axismajor;   //!
   TBranch        *b_JetsAK8_subjets_axisminor;   //!
   TBranch        *b_JetsAK8_subjets_bDiscriminatorCSV;   //!
   TBranch        *b_JetsAK8_subjets_multiplicity;   //!
   TBranch        *b_JetsAK8_subjets_ptD;   //!
   TBranch        *b_JetsAK8_tDiscriminatorDeep;   //!
   TBranch        *b_JetsAK8_tDiscriminatorDeepDecorrel;   //!
   TBranch        *b_JetsAK8_wDiscriminatorDeep;   //!
   TBranch        *b_JetsAK8_wDiscriminatorDeepDecorrel;   //!
   TBranch        *b_JetsAK8_zDiscriminatorDeep;   //!
   TBranch        *b_JetsAK8_zhDiscriminatorDeepDecorrel;   //!
   TBranch        *b_JetsAK8Clean;   //!
   TBranch        *b_JetsAK8Clean_doubleBDiscriminator;   //!
   TBranch        *b_JetsAK8Clean_ID;   //!
   TBranch        *b_JetsAK8Clean_NsubjettinessTau1;   //!
   TBranch        *b_JetsAK8Clean_NsubjettinessTau2;   //!
   TBranch        *b_JetsAK8Clean_NsubjettinessTau3;   //!
   TBranch        *b_JetsAK8Clean_NumBhadrons;   //!
   TBranch        *b_JetsAK8Clean_NumChadrons;   //!
   TBranch        *b_JetsAK8Clean_prunedMass;   //!
   TBranch        *b_JetsAK8Clean_softDropMass;   //!
   TBranch        *b_JetsAK8Clean_subjets;   //!
   TBranch        *b_JetsAK8Clean_subjets_bDiscriminatorCSV;   //!
   TBranch        *b_Jetsclean;   //!
   TBranch        *b_Jetsclean_bDiscriminatorCSV;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVBvsAll;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVCvsB;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVCvsL;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVprobb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVprobbb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVprobc;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVprobudsg;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobbb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobc;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobg;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourproblepb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobuds;   //!
   TBranch        *b_Jetsclean_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jetsclean_hadronFlavor;   //!
   TBranch        *b_Jetsclean_HTMask;   //!
   TBranch        *b_Jetsclean_ID;   //!
   TBranch        *b_Jetsclean_MHT2p4Mask;   //!
   TBranch        *b_Jetsclean_MHTMask;   //!
   TBranch        *b_Jetsclean_muonEnergyFraction;   //!
   TBranch        *b_Jetsclean_partonFlavor;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_METclean;   //!
   TBranch        *b_METPhi;   //!
   TBranch        *b_METPhiclean;   //!
   TBranch        *b_METSignificance;   //!
   TBranch        *b_METSignificanceclean;   //!
   TBranch        *b_MHT;   //!
   TBranch        *b_MHT2p4;   //!
   TBranch        *b_MHTclean;   //!
   TBranch        *b_MHTclean2p4;   //!
   TBranch        *b_MHTOnline;   //!
   TBranch        *b_MHTPhi;   //!
   TBranch        *b_MHTPhi2p4;   //!
   TBranch        *b_MHTPhiclean;   //!
   TBranch        *b_MHTPhiclean2p4;   //!
   TBranch        *b_MJJ_AK8;   //!
   TBranch        *b_Mmc_AK8;   //!
   TBranch        *b_MT2;   //!
   TBranch        *b_MT_AK8;   //!
   TBranch        *b_Muons;   //!
   TBranch        *b_Muons_charge;   //!
   TBranch        *b_Muons_mediumID;   //!
   TBranch        *b_Muons_MiniIso;   //!
   TBranch        *b_Muons_MT2Activity;   //!
   TBranch        *b_Muons_MTW;   //!
   TBranch        *b_Muons_passIso;   //!
   TBranch        *b_Muons_tightID;   //!
   TBranch        *b_nAllVertices;   //!
   TBranch        *b_NElectrons;   //!
   TBranch        *b_NJets;   //!
   TBranch        *b_NJetsclean;   //!
   TBranch        *b_NMuons;   //!
   TBranch        *b_NVtx;   //!
   TBranch        *b_PFCaloMETRatio;   //!
   TBranch        *b_Photons;   //!
   TBranch        *b_Photons_electronFakes;   //!
   TBranch        *b_Photons_fullID;   //!
   TBranch        *b_Photons_genMatched;   //!
   TBranch        *b_Photons_hadTowOverEM;   //!
   TBranch        *b_Photons_hasPixelSeed;   //!
   TBranch        *b_Photons_isEB;   //!
   TBranch        *b_Photons_nonPrompt;   //!
   TBranch        *b_Photons_passElectronVeto;   //!
   TBranch        *b_Photons_pfChargedIso;   //!
   TBranch        *b_Photons_pfChargedIsoRhoCorr;   //!
   TBranch        *b_Photons_pfGammaIso;   //!
   TBranch        *b_Photons_pfGammaIsoRhoCorr;   //!
   TBranch        *b_Photons_pfNeutralIso;   //!
   TBranch        *b_Photons_pfNeutralIsoRhoCorr;   //!
   TBranch        *b_Photons_sigmaIetaIeta;   //!
   TBranch        *b_PrescaleWeightHT;   //!
   TBranch        *b_PrimaryVertexFilter;   //!
   TBranch        *b_TAPElectronTracks;   //!
   TBranch        *b_TAPElectronTracks_activity;   //!
   TBranch        *b_TAPElectronTracks_charge;   //!
   TBranch        *b_TAPElectronTracks_mT;   //!
   TBranch        *b_TAPElectronTracks_trkiso;   //!
   TBranch        *b_TAPMuonTracks;   //!
   TBranch        *b_TAPMuonTracks_activity;   //!
   TBranch        *b_TAPMuonTracks_charge;   //!
   TBranch        *b_TAPMuonTracks_mT;   //!
   TBranch        *b_TAPMuonTracks_trkiso;   //!
   TBranch        *b_TAPPionTracks;   //!
   TBranch        *b_TAPPionTracks_activity;   //!
   TBranch        *b_TAPPionTracks_charge;   //!
   TBranch        *b_TAPPionTracks_mT;   //!
   TBranch        *b_TAPPionTracks_trkiso;   //!
   TBranch        *b_tracks;   //!
   TBranch        *b_tracks_charge;   //!
   TBranch        *b_tracks_chargedPtSum;   //!
   TBranch        *b_tracks_chi2perNdof;   //!
   TBranch        *b_tracks_deDxHarmonic2pixel;   //!
   TBranch        *b_tracks_deDxHarmonic2strips;   //!
   TBranch        *b_tracks_dxyVtx;   //!
   TBranch        *b_tracks_dzVtx;   //!
   TBranch        *b_tracks_matchedCaloEnergy;   //!
   TBranch        *b_tracks_matchedCaloEnergyJets;   //!
   TBranch        *b_tracks_minDrLepton;   //!
   TBranch        *b_tracks_neutralPtSum;   //!
   TBranch        *b_tracks_neutralWithoutGammaPtSum;   //!
   TBranch        *b_tracks_nMissingInnerHits;   //!
   TBranch        *b_tracks_nMissingMiddleHits;   //!
   TBranch        *b_tracks_nMissingOuterHits;   //!
   TBranch        *b_tracks_nValidPixelHits;   //!
   TBranch        *b_tracks_nValidTrackerHits;   //!
   TBranch        *b_tracks_passExo16044DeadNoisyECALVeto;   //!
   TBranch        *b_tracks_passExo16044GapsVeto;   //!
   TBranch        *b_tracks_passExo16044JetIso;   //!
   TBranch        *b_tracks_passExo16044LepIso;   //!
   TBranch        *b_tracks_passExo16044Tag;   //!
   TBranch        *b_tracks_passPFCandVeto;   //!
   TBranch        *b_tracks_pixelLayersWithMeasurement;   //!
   TBranch        *b_tracks_ptError;   //!
   TBranch        *b_tracks_trackerLayersWithMeasurement;   //!
   TBranch        *b_tracks_trackJetIso;   //!
   TBranch        *b_tracks_trackQualityConfirmed;   //!
   TBranch        *b_tracks_trackQualityDiscarded;   //!
   TBranch        *b_tracks_trackQualityGoodIterative;   //!
   TBranch        *b_tracks_trackQualityHighPurity;   //!
   TBranch        *b_tracks_trackQualityHighPuritySetWithPV;   //!
   TBranch        *b_tracks_trackQualityLoose;   //!
   TBranch        *b_tracks_trackQualityLooseSetWithPV;   //!
   TBranch        *b_tracks_trackQualitySize;   //!
   TBranch        *b_tracks_trackQualityTight;   //!
   TBranch        *b_tracks_trackQualityUndef;   //!
   TBranch        *b_tracks_trkMiniRelIso;   //!
   TBranch        *b_tracks_trkRelIso;   //!
   TBranch        *b_TriggerNames;   //!
   TBranch        *b_TriggerPass;   //!
   TBranch        *b_TriggerPrescales;   //!
   TBranch        *b_TriggerVersion;   //!
   TBranch        *b_ZCandidates;   //!

   DT(TTree *tree=0);
   virtual ~DT();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DT_cxx
DT::DT(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Run2016B-17Jul2018_ver2-v1.METAOD_90000-BCA4BDEF-639F-E711-97DF-008CFAE45430_RA2AnalysisTree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("Run2016B-17Jul2018_ver2-v1.METAOD_90000-BCA4BDEF-639F-E711-97DF-008CFAE45430_RA2AnalysisTree.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("Run2016B-17Jul2018_ver2-v1.METAOD_90000-BCA4BDEF-639F-E711-97DF-008CFAE45430_RA2AnalysisTree.root:/TreeMaker2");
      dir->GetObject("PreSelection",tree);

   }
   Init(tree);
}

DT::~DT()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DT::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DT::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void DT::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Electrons = 0;
   Electrons_charge = 0;
   Electrons_EnergyCorr = 0;
   Electrons_mediumID = 0;
   Electrons_MiniIso = 0;
   Electrons_MT2Activity = 0;
   Electrons_MTW = 0;
   Electrons_passIso = 0;
   Electrons_tightID = 0;
   Electrons_TrkEnergyCorr = 0;
   Jets = 0;
   Jets_axismajor = 0;
   Jets_axisminor = 0;
   Jets_bDiscriminatorCSV = 0;
   Jets_bJetTagDeepCSVBvsAll = 0;
   Jets_bJetTagDeepCSVCvsB = 0;
   Jets_bJetTagDeepCSVCvsL = 0;
   Jets_bJetTagDeepCSVprobb = 0;
   Jets_bJetTagDeepCSVprobbb = 0;
   Jets_bJetTagDeepCSVprobc = 0;
   Jets_bJetTagDeepCSVprobudsg = 0;
   Jets_bJetTagDeepFlavourprobb = 0;
   Jets_bJetTagDeepFlavourprobbb = 0;
   Jets_bJetTagDeepFlavourprobc = 0;
   Jets_bJetTagDeepFlavourprobg = 0;
   Jets_bJetTagDeepFlavourproblepb = 0;
   Jets_bJetTagDeepFlavourprobuds = 0;
   Jets_chargedEmEnergyFraction = 0;
   Jets_chargedHadronEnergyFraction = 0;
   Jets_chargedHadronMultiplicity = 0;
   Jets_chargedMultiplicity = 0;
   Jets_electronEnergyFraction = 0;
   Jets_electronMultiplicity = 0;
   Jets_hadronFlavor = 0;
   Jets_hfEMEnergyFraction = 0;
   Jets_hfHadronEnergyFraction = 0;
   Jets_HTMask = 0;
   Jets_ID = 0;
   Jets_jecFactor = 0;
   Jets_jecUnc = 0;
   Jets_LeptonMask = 0;
   Jets_MHT2p4Mask = 0;
   Jets_MHTMask = 0;
   Jets_multiplicity = 0;
   Jets_muonEnergyFraction = 0;
   Jets_muonMultiplicity = 0;
   Jets_neutralEmEnergyFraction = 0;
   Jets_neutralHadronEnergyFraction = 0;
   Jets_neutralHadronMultiplicity = 0;
   Jets_neutralMultiplicity = 0;
   Jets_partonFlavor = 0;
   Jets_photonEnergyFraction = 0;
   Jets_photonMultiplicity = 0;
   Jets_ptD = 0;
   Jets_qgLikelihood = 0;
   JetsAK8 = 0;
   JetsAK8_axismajor = 0;
   JetsAK8_axisminor = 0;
   JetsAK8_chargedEmEnergyFraction = 0;
   JetsAK8_chargedHadronEnergyFraction = 0;
   JetsAK8_chargedHadronMultiplicity = 0;
   JetsAK8_chargedMultiplicity = 0;
   JetsAK8_deepDoubleBDiscriminatorH = 0;
   JetsAK8_deepDoubleBDiscriminatorQ = 0;
   JetsAK8_doubleBDiscriminator = 0;
   JetsAK8_ecfN2b1 = 0;
   JetsAK8_ecfN2b2 = 0;
   JetsAK8_ecfN3b1 = 0;
   JetsAK8_ecfN3b2 = 0;
   JetsAK8_electronEnergyFraction = 0;
   JetsAK8_electronMultiplicity = 0;
   JetsAK8_girth = 0;
   JetsAK8_hDiscriminatorDeep = 0;
   JetsAK8_hfEMEnergyFraction = 0;
   JetsAK8_hfHadronEnergyFraction = 0;
   JetsAK8_ID = 0;
   JetsAK8_jecFactor = 0;
   JetsAK8_jecUnc = 0;
   JetsAK8_lean = 0;
   JetsAK8_momenthalf = 0;
   JetsAK8_multiplicity = 0;
   JetsAK8_muonEnergyFraction = 0;
   JetsAK8_muonMultiplicity = 0;
   JetsAK8_neutralEmEnergyFraction = 0;
   JetsAK8_neutralHadronEnergyFraction = 0;
   JetsAK8_neutralHadronMultiplicity = 0;
   JetsAK8_neutralMultiplicity = 0;
   JetsAK8_NsubjettinessTau1 = 0;
   JetsAK8_NsubjettinessTau2 = 0;
   JetsAK8_NsubjettinessTau3 = 0;
   JetsAK8_NumBhadrons = 0;
   JetsAK8_NumChadrons = 0;
   JetsAK8_photonEnergyFraction = 0;
   JetsAK8_photonMultiplicity = 0;
   JetsAK8_prunedMass = 0;
   JetsAK8_ptD = 0;
   JetsAK8_ptdrlog = 0;
   JetsAK8_softDropMass = 0;
   JetsAK8_subjets = 0;
   JetsAK8_subjets_axismajor = 0;
   JetsAK8_subjets_axisminor = 0;
   JetsAK8_subjets_bDiscriminatorCSV = 0;
   JetsAK8_subjets_multiplicity = 0;
   JetsAK8_subjets_ptD = 0;
   JetsAK8_tDiscriminatorDeep = 0;
   JetsAK8_tDiscriminatorDeepDecorrel = 0;
   JetsAK8_wDiscriminatorDeep = 0;
   JetsAK8_wDiscriminatorDeepDecorrel = 0;
   JetsAK8_zDiscriminatorDeep = 0;
   JetsAK8_zhDiscriminatorDeepDecorrel = 0;
   JetsAK8Clean = 0;
   JetsAK8Clean_doubleBDiscriminator = 0;
   JetsAK8Clean_ID = 0;
   JetsAK8Clean_NsubjettinessTau1 = 0;
   JetsAK8Clean_NsubjettinessTau2 = 0;
   JetsAK8Clean_NsubjettinessTau3 = 0;
   JetsAK8Clean_NumBhadrons = 0;
   JetsAK8Clean_NumChadrons = 0;
   JetsAK8Clean_prunedMass = 0;
   JetsAK8Clean_softDropMass = 0;
   JetsAK8Clean_subjets = 0;
   JetsAK8Clean_subjets_bDiscriminatorCSV = 0;
   Jetsclean = 0;
   Jetsclean_bDiscriminatorCSV = 0;
   Jetsclean_bJetTagDeepCSVBvsAll = 0;
   Jetsclean_bJetTagDeepCSVCvsB = 0;
   Jetsclean_bJetTagDeepCSVCvsL = 0;
   Jetsclean_bJetTagDeepCSVprobb = 0;
   Jetsclean_bJetTagDeepCSVprobbb = 0;
   Jetsclean_bJetTagDeepCSVprobc = 0;
   Jetsclean_bJetTagDeepCSVprobudsg = 0;
   Jetsclean_bJetTagDeepFlavourprobb = 0;
   Jetsclean_bJetTagDeepFlavourprobbb = 0;
   Jetsclean_bJetTagDeepFlavourprobc = 0;
   Jetsclean_bJetTagDeepFlavourprobg = 0;
   Jetsclean_bJetTagDeepFlavourproblepb = 0;
   Jetsclean_bJetTagDeepFlavourprobuds = 0;
   Jetsclean_chargedHadronEnergyFraction = 0;
   Jetsclean_hadronFlavor = 0;
   Jetsclean_HTMask = 0;
   Jetsclean_ID = 0;
   Jetsclean_MHT2p4Mask = 0;
   Jetsclean_MHTMask = 0;
   Jetsclean_muonEnergyFraction = 0;
   Jetsclean_partonFlavor = 0;
   Muons = 0;
   Muons_charge = 0;
   Muons_mediumID = 0;
   Muons_MiniIso = 0;
   Muons_MT2Activity = 0;
   Muons_MTW = 0;
   Muons_passIso = 0;
   Muons_tightID = 0;
   Photons = 0;
   Photons_electronFakes = 0;
   Photons_fullID = 0;
   Photons_genMatched = 0;
   Photons_hadTowOverEM = 0;
   Photons_hasPixelSeed = 0;
   Photons_isEB = 0;
   Photons_nonPrompt = 0;
   Photons_passElectronVeto = 0;
   Photons_pfChargedIso = 0;
   Photons_pfChargedIsoRhoCorr = 0;
   Photons_pfGammaIso = 0;
   Photons_pfGammaIsoRhoCorr = 0;
   Photons_pfNeutralIso = 0;
   Photons_pfNeutralIsoRhoCorr = 0;
   Photons_sigmaIetaIeta = 0;
   TAPElectronTracks = 0;
   TAPElectronTracks_activity = 0;
   TAPElectronTracks_charge = 0;
   TAPElectronTracks_mT = 0;
   TAPElectronTracks_trkiso = 0;
   TAPMuonTracks = 0;
   TAPMuonTracks_activity = 0;
   TAPMuonTracks_charge = 0;
   TAPMuonTracks_mT = 0;
   TAPMuonTracks_trkiso = 0;
   TAPPionTracks = 0;
   TAPPionTracks_activity = 0;
   TAPPionTracks_charge = 0;
   TAPPionTracks_mT = 0;
   TAPPionTracks_trkiso = 0;
   tracks = 0;
   tracks_charge = 0;
   tracks_chargedPtSum = 0;
   tracks_chi2perNdof = 0;
   tracks_deDxHarmonic2pixel = 0;
   tracks_deDxHarmonic2strips = 0;
   tracks_dxyVtx = 0;
   tracks_dzVtx = 0;
   tracks_matchedCaloEnergy = 0;
   tracks_matchedCaloEnergyJets = 0;
   tracks_minDrLepton = 0;
   tracks_neutralPtSum = 0;
   tracks_neutralWithoutGammaPtSum = 0;
   tracks_nMissingInnerHits = 0;
   tracks_nMissingMiddleHits = 0;
   tracks_nMissingOuterHits = 0;
   tracks_nValidPixelHits = 0;
   tracks_nValidTrackerHits = 0;
   tracks_passExo16044DeadNoisyECALVeto = 0;
   tracks_passExo16044GapsVeto = 0;
   tracks_passExo16044JetIso = 0;
   tracks_passExo16044LepIso = 0;
   tracks_passExo16044Tag = 0;
   tracks_passPFCandVeto = 0;
   tracks_pixelLayersWithMeasurement = 0;
   tracks_ptError = 0;
   tracks_trackerLayersWithMeasurement = 0;
   tracks_trackJetIso = 0;
   tracks_trackQualityConfirmed = 0;
   tracks_trackQualityDiscarded = 0;
   tracks_trackQualityGoodIterative = 0;
   tracks_trackQualityHighPurity = 0;
   tracks_trackQualityHighPuritySetWithPV = 0;
   tracks_trackQualityLoose = 0;
   tracks_trackQualityLooseSetWithPV = 0;
   tracks_trackQualitySize = 0;
   tracks_trackQualityTight = 0;
   tracks_trackQualityUndef = 0;
   tracks_trkMiniRelIso = 0;
   tracks_trkRelIso = 0;
   TriggerNames = 0;
   TriggerPass = 0;
   TriggerPrescales = 0;
   TriggerVersion = 0;
   ZCandidates = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNum", &RunNum, &b_RunNum);
   fChain->SetBranchAddress("LumiBlockNum", &LumiBlockNum, &b_LumiBlockNum);
   fChain->SetBranchAddress("EvtNum", &EvtNum, &b_EvtNum);
   fChain->SetBranchAddress("BadChargedCandidateFilter", &BadChargedCandidateFilter, &b_BadChargedCandidateFilter);
   fChain->SetBranchAddress("BadPFMuonFilter", &BadPFMuonFilter, &b_BadPFMuonFilter);
   fChain->SetBranchAddress("BTags", &BTags, &b_BTags);
   fChain->SetBranchAddress("BTagsclean", &BTagsclean, &b_BTagsclean);
   fChain->SetBranchAddress("BTagsDeepCSV", &BTagsDeepCSV, &b_BTagsDeepCSV);
   fChain->SetBranchAddress("BTagsDeepCSVclean", &BTagsDeepCSVclean, &b_BTagsDeepCSVclean);
   fChain->SetBranchAddress("CaloMET", &CaloMET, &b_CaloMET);
   fChain->SetBranchAddress("CaloMETPhi", &CaloMETPhi, &b_CaloMETPhi);
   fChain->SetBranchAddress("CSCTightHaloFilter", &CSCTightHaloFilter, &b_CSCTightHaloFilter);
   fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);
   fChain->SetBranchAddress("DeltaPhi12p4", &DeltaPhi12p4, &b_DeltaPhi12p4);
   fChain->SetBranchAddress("DeltaPhi1_AK8", &DeltaPhi1_AK8, &b_DeltaPhi1_AK8);
   fChain->SetBranchAddress("DeltaPhi1clean", &DeltaPhi1clean, &b_DeltaPhi1clean);
   fChain->SetBranchAddress("DeltaPhi1clean2p4", &DeltaPhi1clean2p4, &b_DeltaPhi1clean2p4);
   fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);
   fChain->SetBranchAddress("DeltaPhi22p4", &DeltaPhi22p4, &b_DeltaPhi22p4);
   fChain->SetBranchAddress("DeltaPhi2_AK8", &DeltaPhi2_AK8, &b_DeltaPhi2_AK8);
   fChain->SetBranchAddress("DeltaPhi2clean", &DeltaPhi2clean, &b_DeltaPhi2clean);
   fChain->SetBranchAddress("DeltaPhi2clean2p4", &DeltaPhi2clean2p4, &b_DeltaPhi2clean2p4);
   fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);
   fChain->SetBranchAddress("DeltaPhi32p4", &DeltaPhi32p4, &b_DeltaPhi32p4);
   fChain->SetBranchAddress("DeltaPhi3clean", &DeltaPhi3clean, &b_DeltaPhi3clean);
   fChain->SetBranchAddress("DeltaPhi3clean2p4", &DeltaPhi3clean2p4, &b_DeltaPhi3clean2p4);
   fChain->SetBranchAddress("DeltaPhi4", &DeltaPhi4, &b_DeltaPhi4);
   fChain->SetBranchAddress("DeltaPhi42p4", &DeltaPhi42p4, &b_DeltaPhi42p4);
   fChain->SetBranchAddress("DeltaPhi4clean", &DeltaPhi4clean, &b_DeltaPhi4clean);
   fChain->SetBranchAddress("DeltaPhi4clean2p4", &DeltaPhi4clean2p4, &b_DeltaPhi4clean2p4);
   fChain->SetBranchAddress("DeltaPhiMin_AK8", &DeltaPhiMin_AK8, &b_DeltaPhiMin_AK8);
   fChain->SetBranchAddress("ecalBadCalibFilter", &ecalBadCalibFilter, &b_ecalBadCalibFilter);
   fChain->SetBranchAddress("EcalDeadCellTriggerPrimitiveFilter", &EcalDeadCellTriggerPrimitiveFilter, &b_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("eeBadScFilter", &eeBadScFilter, &b_eeBadScFilter);
   fChain->SetBranchAddress("Electrons", &Electrons, &b_Electrons);
   fChain->SetBranchAddress("Electrons_charge", &Electrons_charge, &b_Electrons_charge);
   fChain->SetBranchAddress("Electrons_EnergyCorr", &Electrons_EnergyCorr, &b_Electrons_EnergyCorr);
   fChain->SetBranchAddress("Electrons_mediumID", &Electrons_mediumID, &b_Electrons_mediumID);
   fChain->SetBranchAddress("Electrons_MiniIso", &Electrons_MiniIso, &b_Electrons_MiniIso);
   fChain->SetBranchAddress("Electrons_MT2Activity", &Electrons_MT2Activity, &b_Electrons_MT2Activity);
   fChain->SetBranchAddress("Electrons_MTW", &Electrons_MTW, &b_Electrons_MTW);
   fChain->SetBranchAddress("Electrons_passIso", &Electrons_passIso, &b_Electrons_passIso);
   fChain->SetBranchAddress("Electrons_tightID", &Electrons_tightID, &b_Electrons_tightID);
   fChain->SetBranchAddress("Electrons_TrkEnergyCorr", &Electrons_TrkEnergyCorr, &b_Electrons_TrkEnergyCorr);
   fChain->SetBranchAddress("globalSuperTightHalo2016Filter", &globalSuperTightHalo2016Filter, &b_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("globalTightHalo2016Filter", &globalTightHalo2016Filter, &b_globalTightHalo2016Filter);
   fChain->SetBranchAddress("hasGenPromptPhoton", &hasGenPromptPhoton, &b_hasGenPromptPhoton);
   fChain->SetBranchAddress("HBHEIsoNoiseFilter", &HBHEIsoNoiseFilter, &b_HBHEIsoNoiseFilter);
   fChain->SetBranchAddress("HBHENoiseFilter", &HBHENoiseFilter, &b_HBHENoiseFilter);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("HT5", &HT5, &b_HT5);
   fChain->SetBranchAddress("HT5clean", &HT5clean, &b_HT5clean);
   fChain->SetBranchAddress("HTclean", &HTclean, &b_HTclean);
   fChain->SetBranchAddress("HTOnline", &HTOnline, &b_HTOnline);
   fChain->SetBranchAddress("isoElectronTracks", &isoElectronTracks, &b_isoElectronTracks);
   fChain->SetBranchAddress("isoElectronTracksclean", &isoElectronTracksclean, &b_isoElectronTracksclean);
   fChain->SetBranchAddress("isoMuonTracks", &isoMuonTracks, &b_isoMuonTracks);
   fChain->SetBranchAddress("isoMuonTracksclean", &isoMuonTracksclean, &b_isoMuonTracksclean);
   fChain->SetBranchAddress("isoPionTracks", &isoPionTracks, &b_isoPionTracks);
   fChain->SetBranchAddress("isoPionTracksclean", &isoPionTracksclean, &b_isoPionTracksclean);
   fChain->SetBranchAddress("JetID", &JetID, &b_JetID);
   fChain->SetBranchAddress("JetIDAK8", &JetIDAK8, &b_JetIDAK8);
   fChain->SetBranchAddress("JetIDAK8Clean", &JetIDAK8Clean, &b_JetIDAK8Clean);
   fChain->SetBranchAddress("JetIDclean", &JetIDclean, &b_JetIDclean);
   fChain->SetBranchAddress("Jets", &Jets, &b_Jets);
   fChain->SetBranchAddress("Jets_axismajor", &Jets_axismajor, &b_Jets_axismajor);
   fChain->SetBranchAddress("Jets_axisminor", &Jets_axisminor, &b_Jets_axisminor);
   fChain->SetBranchAddress("Jets_bDiscriminatorCSV", &Jets_bDiscriminatorCSV, &b_Jets_bDiscriminatorCSV);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVBvsAll", &Jets_bJetTagDeepCSVBvsAll, &b_Jets_bJetTagDeepCSVBvsAll);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVCvsB", &Jets_bJetTagDeepCSVCvsB, &b_Jets_bJetTagDeepCSVCvsB);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVCvsL", &Jets_bJetTagDeepCSVCvsL, &b_Jets_bJetTagDeepCSVCvsL);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVprobb", &Jets_bJetTagDeepCSVprobb, &b_Jets_bJetTagDeepCSVprobb);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVprobbb", &Jets_bJetTagDeepCSVprobbb, &b_Jets_bJetTagDeepCSVprobbb);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVprobc", &Jets_bJetTagDeepCSVprobc, &b_Jets_bJetTagDeepCSVprobc);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVprobudsg", &Jets_bJetTagDeepCSVprobudsg, &b_Jets_bJetTagDeepCSVprobudsg);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobb", &Jets_bJetTagDeepFlavourprobb, &b_Jets_bJetTagDeepFlavourprobb);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobbb", &Jets_bJetTagDeepFlavourprobbb, &b_Jets_bJetTagDeepFlavourprobbb);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobc", &Jets_bJetTagDeepFlavourprobc, &b_Jets_bJetTagDeepFlavourprobc);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobg", &Jets_bJetTagDeepFlavourprobg, &b_Jets_bJetTagDeepFlavourprobg);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourproblepb", &Jets_bJetTagDeepFlavourproblepb, &b_Jets_bJetTagDeepFlavourproblepb);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobuds", &Jets_bJetTagDeepFlavourprobuds, &b_Jets_bJetTagDeepFlavourprobuds);
   fChain->SetBranchAddress("Jets_chargedEmEnergyFraction", &Jets_chargedEmEnergyFraction, &b_Jets_chargedEmEnergyFraction);
   fChain->SetBranchAddress("Jets_chargedHadronEnergyFraction", &Jets_chargedHadronEnergyFraction, &b_Jets_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jets_chargedHadronMultiplicity", &Jets_chargedHadronMultiplicity, &b_Jets_chargedHadronMultiplicity);
   fChain->SetBranchAddress("Jets_chargedMultiplicity", &Jets_chargedMultiplicity, &b_Jets_chargedMultiplicity);
   fChain->SetBranchAddress("Jets_electronEnergyFraction", &Jets_electronEnergyFraction, &b_Jets_electronEnergyFraction);
   fChain->SetBranchAddress("Jets_electronMultiplicity", &Jets_electronMultiplicity, &b_Jets_electronMultiplicity);
   fChain->SetBranchAddress("Jets_hadronFlavor", &Jets_hadronFlavor, &b_Jets_hadronFlavor);
   fChain->SetBranchAddress("Jets_hfEMEnergyFraction", &Jets_hfEMEnergyFraction, &b_Jets_hfEMEnergyFraction);
   fChain->SetBranchAddress("Jets_hfHadronEnergyFraction", &Jets_hfHadronEnergyFraction, &b_Jets_hfHadronEnergyFraction);
   fChain->SetBranchAddress("Jets_HTMask", &Jets_HTMask, &b_Jets_HTMask);
   fChain->SetBranchAddress("Jets_ID", &Jets_ID, &b_Jets_ID);
   fChain->SetBranchAddress("Jets_jecFactor", &Jets_jecFactor, &b_Jets_jecFactor);
   fChain->SetBranchAddress("Jets_jecUnc", &Jets_jecUnc, &b_Jets_jecUnc);
   fChain->SetBranchAddress("Jets_LeptonMask", &Jets_LeptonMask, &b_Jets_LeptonMask);
   fChain->SetBranchAddress("Jets_MHT2p4Mask", &Jets_MHT2p4Mask, &b_Jets_MHT2p4Mask);
   fChain->SetBranchAddress("Jets_MHTMask", &Jets_MHTMask, &b_Jets_MHTMask);
   fChain->SetBranchAddress("Jets_multiplicity", &Jets_multiplicity, &b_Jets_multiplicity);
   fChain->SetBranchAddress("Jets_muonEnergyFraction", &Jets_muonEnergyFraction, &b_Jets_muonEnergyFraction);
   fChain->SetBranchAddress("Jets_muonMultiplicity", &Jets_muonMultiplicity, &b_Jets_muonMultiplicity);
   fChain->SetBranchAddress("Jets_neutralEmEnergyFraction", &Jets_neutralEmEnergyFraction, &b_Jets_neutralEmEnergyFraction);
   fChain->SetBranchAddress("Jets_neutralHadronEnergyFraction", &Jets_neutralHadronEnergyFraction, &b_Jets_neutralHadronEnergyFraction);
   fChain->SetBranchAddress("Jets_neutralHadronMultiplicity", &Jets_neutralHadronMultiplicity, &b_Jets_neutralHadronMultiplicity);
   fChain->SetBranchAddress("Jets_neutralMultiplicity", &Jets_neutralMultiplicity, &b_Jets_neutralMultiplicity);
   fChain->SetBranchAddress("Jets_partonFlavor", &Jets_partonFlavor, &b_Jets_partonFlavor);
   fChain->SetBranchAddress("Jets_photonEnergyFraction", &Jets_photonEnergyFraction, &b_Jets_photonEnergyFraction);
   fChain->SetBranchAddress("Jets_photonMultiplicity", &Jets_photonMultiplicity, &b_Jets_photonMultiplicity);
   fChain->SetBranchAddress("Jets_ptD", &Jets_ptD, &b_Jets_ptD);
   fChain->SetBranchAddress("Jets_qgLikelihood", &Jets_qgLikelihood, &b_Jets_qgLikelihood);
   fChain->SetBranchAddress("JetsAK8", &JetsAK8, &b_JetsAK8);
   fChain->SetBranchAddress("JetsAK8_axismajor", &JetsAK8_axismajor, &b_JetsAK8_axismajor);
   fChain->SetBranchAddress("JetsAK8_axisminor", &JetsAK8_axisminor, &b_JetsAK8_axisminor);
   fChain->SetBranchAddress("JetsAK8_chargedEmEnergyFraction", &JetsAK8_chargedEmEnergyFraction, &b_JetsAK8_chargedEmEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_chargedHadronEnergyFraction", &JetsAK8_chargedHadronEnergyFraction, &b_JetsAK8_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_chargedHadronMultiplicity", &JetsAK8_chargedHadronMultiplicity, &b_JetsAK8_chargedHadronMultiplicity);
   fChain->SetBranchAddress("JetsAK8_chargedMultiplicity", &JetsAK8_chargedMultiplicity, &b_JetsAK8_chargedMultiplicity);
   fChain->SetBranchAddress("JetsAK8_deepDoubleBDiscriminatorH", &JetsAK8_deepDoubleBDiscriminatorH, &b_JetsAK8_deepDoubleBDiscriminatorH);
   fChain->SetBranchAddress("JetsAK8_deepDoubleBDiscriminatorQ", &JetsAK8_deepDoubleBDiscriminatorQ, &b_JetsAK8_deepDoubleBDiscriminatorQ);
   fChain->SetBranchAddress("JetsAK8_doubleBDiscriminator", &JetsAK8_doubleBDiscriminator, &b_JetsAK8_doubleBDiscriminator);
   fChain->SetBranchAddress("JetsAK8_ecfN2b1", &JetsAK8_ecfN2b1, &b_JetsAK8_ecfN2b1);
   fChain->SetBranchAddress("JetsAK8_ecfN2b2", &JetsAK8_ecfN2b2, &b_JetsAK8_ecfN2b2);
   fChain->SetBranchAddress("JetsAK8_ecfN3b1", &JetsAK8_ecfN3b1, &b_JetsAK8_ecfN3b1);
   fChain->SetBranchAddress("JetsAK8_ecfN3b2", &JetsAK8_ecfN3b2, &b_JetsAK8_ecfN3b2);
   fChain->SetBranchAddress("JetsAK8_electronEnergyFraction", &JetsAK8_electronEnergyFraction, &b_JetsAK8_electronEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_electronMultiplicity", &JetsAK8_electronMultiplicity, &b_JetsAK8_electronMultiplicity);
   fChain->SetBranchAddress("JetsAK8_girth", &JetsAK8_girth, &b_JetsAK8_girth);
   fChain->SetBranchAddress("JetsAK8_hDiscriminatorDeep", &JetsAK8_hDiscriminatorDeep, &b_JetsAK8_hDiscriminatorDeep);
   fChain->SetBranchAddress("JetsAK8_hfEMEnergyFraction", &JetsAK8_hfEMEnergyFraction, &b_JetsAK8_hfEMEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_hfHadronEnergyFraction", &JetsAK8_hfHadronEnergyFraction, &b_JetsAK8_hfHadronEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_ID", &JetsAK8_ID, &b_JetsAK8_ID);
   fChain->SetBranchAddress("JetsAK8_jecFactor", &JetsAK8_jecFactor, &b_JetsAK8_jecFactor);
   fChain->SetBranchAddress("JetsAK8_jecUnc", &JetsAK8_jecUnc, &b_JetsAK8_jecUnc);
   fChain->SetBranchAddress("JetsAK8_lean", &JetsAK8_lean, &b_JetsAK8_lean);
   fChain->SetBranchAddress("JetsAK8_momenthalf", &JetsAK8_momenthalf, &b_JetsAK8_momenthalf);
   fChain->SetBranchAddress("JetsAK8_multiplicity", &JetsAK8_multiplicity, &b_JetsAK8_multiplicity);
   fChain->SetBranchAddress("JetsAK8_muonEnergyFraction", &JetsAK8_muonEnergyFraction, &b_JetsAK8_muonEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_muonMultiplicity", &JetsAK8_muonMultiplicity, &b_JetsAK8_muonMultiplicity);
   fChain->SetBranchAddress("JetsAK8_neutralEmEnergyFraction", &JetsAK8_neutralEmEnergyFraction, &b_JetsAK8_neutralEmEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_neutralHadronEnergyFraction", &JetsAK8_neutralHadronEnergyFraction, &b_JetsAK8_neutralHadronEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_neutralHadronMultiplicity", &JetsAK8_neutralHadronMultiplicity, &b_JetsAK8_neutralHadronMultiplicity);
   fChain->SetBranchAddress("JetsAK8_neutralMultiplicity", &JetsAK8_neutralMultiplicity, &b_JetsAK8_neutralMultiplicity);
   fChain->SetBranchAddress("JetsAK8_NsubjettinessTau1", &JetsAK8_NsubjettinessTau1, &b_JetsAK8_NsubjettinessTau1);
   fChain->SetBranchAddress("JetsAK8_NsubjettinessTau2", &JetsAK8_NsubjettinessTau2, &b_JetsAK8_NsubjettinessTau2);
   fChain->SetBranchAddress("JetsAK8_NsubjettinessTau3", &JetsAK8_NsubjettinessTau3, &b_JetsAK8_NsubjettinessTau3);
   fChain->SetBranchAddress("JetsAK8_NumBhadrons", &JetsAK8_NumBhadrons, &b_JetsAK8_NumBhadrons);
   fChain->SetBranchAddress("JetsAK8_NumChadrons", &JetsAK8_NumChadrons, &b_JetsAK8_NumChadrons);
   fChain->SetBranchAddress("JetsAK8_photonEnergyFraction", &JetsAK8_photonEnergyFraction, &b_JetsAK8_photonEnergyFraction);
   fChain->SetBranchAddress("JetsAK8_photonMultiplicity", &JetsAK8_photonMultiplicity, &b_JetsAK8_photonMultiplicity);
   fChain->SetBranchAddress("JetsAK8_prunedMass", &JetsAK8_prunedMass, &b_JetsAK8_prunedMass);
   fChain->SetBranchAddress("JetsAK8_ptD", &JetsAK8_ptD, &b_JetsAK8_ptD);
   fChain->SetBranchAddress("JetsAK8_ptdrlog", &JetsAK8_ptdrlog, &b_JetsAK8_ptdrlog);
   fChain->SetBranchAddress("JetsAK8_softDropMass", &JetsAK8_softDropMass, &b_JetsAK8_softDropMass);
   fChain->SetBranchAddress("JetsAK8_subjets", &JetsAK8_subjets, &b_JetsAK8_subjets);
   fChain->SetBranchAddress("JetsAK8_subjets_axismajor", &JetsAK8_subjets_axismajor, &b_JetsAK8_subjets_axismajor);
   fChain->SetBranchAddress("JetsAK8_subjets_axisminor", &JetsAK8_subjets_axisminor, &b_JetsAK8_subjets_axisminor);
   fChain->SetBranchAddress("JetsAK8_subjets_bDiscriminatorCSV", &JetsAK8_subjets_bDiscriminatorCSV, &b_JetsAK8_subjets_bDiscriminatorCSV);
   fChain->SetBranchAddress("JetsAK8_subjets_multiplicity", &JetsAK8_subjets_multiplicity, &b_JetsAK8_subjets_multiplicity);
   fChain->SetBranchAddress("JetsAK8_subjets_ptD", &JetsAK8_subjets_ptD, &b_JetsAK8_subjets_ptD);
   fChain->SetBranchAddress("JetsAK8_tDiscriminatorDeep", &JetsAK8_tDiscriminatorDeep, &b_JetsAK8_tDiscriminatorDeep);
   fChain->SetBranchAddress("JetsAK8_tDiscriminatorDeepDecorrel", &JetsAK8_tDiscriminatorDeepDecorrel, &b_JetsAK8_tDiscriminatorDeepDecorrel);
   fChain->SetBranchAddress("JetsAK8_wDiscriminatorDeep", &JetsAK8_wDiscriminatorDeep, &b_JetsAK8_wDiscriminatorDeep);
   fChain->SetBranchAddress("JetsAK8_wDiscriminatorDeepDecorrel", &JetsAK8_wDiscriminatorDeepDecorrel, &b_JetsAK8_wDiscriminatorDeepDecorrel);
   fChain->SetBranchAddress("JetsAK8_zDiscriminatorDeep", &JetsAK8_zDiscriminatorDeep, &b_JetsAK8_zDiscriminatorDeep);
   fChain->SetBranchAddress("JetsAK8_zhDiscriminatorDeepDecorrel", &JetsAK8_zhDiscriminatorDeepDecorrel, &b_JetsAK8_zhDiscriminatorDeepDecorrel);
   fChain->SetBranchAddress("JetsAK8Clean", &JetsAK8Clean, &b_JetsAK8Clean);
   fChain->SetBranchAddress("JetsAK8Clean_doubleBDiscriminator", &JetsAK8Clean_doubleBDiscriminator, &b_JetsAK8Clean_doubleBDiscriminator);
   fChain->SetBranchAddress("JetsAK8Clean_ID", &JetsAK8Clean_ID, &b_JetsAK8Clean_ID);
   fChain->SetBranchAddress("JetsAK8Clean_NsubjettinessTau1", &JetsAK8Clean_NsubjettinessTau1, &b_JetsAK8Clean_NsubjettinessTau1);
   fChain->SetBranchAddress("JetsAK8Clean_NsubjettinessTau2", &JetsAK8Clean_NsubjettinessTau2, &b_JetsAK8Clean_NsubjettinessTau2);
   fChain->SetBranchAddress("JetsAK8Clean_NsubjettinessTau3", &JetsAK8Clean_NsubjettinessTau3, &b_JetsAK8Clean_NsubjettinessTau3);
   fChain->SetBranchAddress("JetsAK8Clean_NumBhadrons", &JetsAK8Clean_NumBhadrons, &b_JetsAK8Clean_NumBhadrons);
   fChain->SetBranchAddress("JetsAK8Clean_NumChadrons", &JetsAK8Clean_NumChadrons, &b_JetsAK8Clean_NumChadrons);
   fChain->SetBranchAddress("JetsAK8Clean_prunedMass", &JetsAK8Clean_prunedMass, &b_JetsAK8Clean_prunedMass);
   fChain->SetBranchAddress("JetsAK8Clean_softDropMass", &JetsAK8Clean_softDropMass, &b_JetsAK8Clean_softDropMass);
   fChain->SetBranchAddress("JetsAK8Clean_subjets", &JetsAK8Clean_subjets, &b_JetsAK8Clean_subjets);
   fChain->SetBranchAddress("JetsAK8Clean_subjets_bDiscriminatorCSV", &JetsAK8Clean_subjets_bDiscriminatorCSV, &b_JetsAK8Clean_subjets_bDiscriminatorCSV);
   fChain->SetBranchAddress("Jetsclean", &Jetsclean, &b_Jetsclean);
   fChain->SetBranchAddress("Jetsclean_bDiscriminatorCSV", &Jetsclean_bDiscriminatorCSV, &b_Jetsclean_bDiscriminatorCSV);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVBvsAll", &Jetsclean_bJetTagDeepCSVBvsAll, &b_Jetsclean_bJetTagDeepCSVBvsAll);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVCvsB", &Jetsclean_bJetTagDeepCSVCvsB, &b_Jetsclean_bJetTagDeepCSVCvsB);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVCvsL", &Jetsclean_bJetTagDeepCSVCvsL, &b_Jetsclean_bJetTagDeepCSVCvsL);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVprobb", &Jetsclean_bJetTagDeepCSVprobb, &b_Jetsclean_bJetTagDeepCSVprobb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVprobbb", &Jetsclean_bJetTagDeepCSVprobbb, &b_Jetsclean_bJetTagDeepCSVprobbb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVprobc", &Jetsclean_bJetTagDeepCSVprobc, &b_Jetsclean_bJetTagDeepCSVprobc);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVprobudsg", &Jetsclean_bJetTagDeepCSVprobudsg, &b_Jetsclean_bJetTagDeepCSVprobudsg);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobb", &Jetsclean_bJetTagDeepFlavourprobb, &b_Jetsclean_bJetTagDeepFlavourprobb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobbb", &Jetsclean_bJetTagDeepFlavourprobbb, &b_Jetsclean_bJetTagDeepFlavourprobbb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobc", &Jetsclean_bJetTagDeepFlavourprobc, &b_Jetsclean_bJetTagDeepFlavourprobc);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobg", &Jetsclean_bJetTagDeepFlavourprobg, &b_Jetsclean_bJetTagDeepFlavourprobg);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourproblepb", &Jetsclean_bJetTagDeepFlavourproblepb, &b_Jetsclean_bJetTagDeepFlavourproblepb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobuds", &Jetsclean_bJetTagDeepFlavourprobuds, &b_Jetsclean_bJetTagDeepFlavourprobuds);
   fChain->SetBranchAddress("Jetsclean_chargedHadronEnergyFraction", &Jetsclean_chargedHadronEnergyFraction, &b_Jetsclean_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jetsclean_hadronFlavor", &Jetsclean_hadronFlavor, &b_Jetsclean_hadronFlavor);
   fChain->SetBranchAddress("Jetsclean_HTMask", &Jetsclean_HTMask, &b_Jetsclean_HTMask);
   fChain->SetBranchAddress("Jetsclean_ID", &Jetsclean_ID, &b_Jetsclean_ID);
   fChain->SetBranchAddress("Jetsclean_MHT2p4Mask", &Jetsclean_MHT2p4Mask, &b_Jetsclean_MHT2p4Mask);
   fChain->SetBranchAddress("Jetsclean_MHTMask", &Jetsclean_MHTMask, &b_Jetsclean_MHTMask);
   fChain->SetBranchAddress("Jetsclean_muonEnergyFraction", &Jetsclean_muonEnergyFraction, &b_Jetsclean_muonEnergyFraction);
   fChain->SetBranchAddress("Jetsclean_partonFlavor", &Jetsclean_partonFlavor, &b_Jetsclean_partonFlavor);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("METclean", &METclean, &b_METclean);
   fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
   fChain->SetBranchAddress("METPhiclean", &METPhiclean, &b_METPhiclean);
   fChain->SetBranchAddress("METSignificance", &METSignificance, &b_METSignificance);
   fChain->SetBranchAddress("METSignificanceclean", &METSignificanceclean, &b_METSignificanceclean);
   fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
   fChain->SetBranchAddress("MHT2p4", &MHT2p4, &b_MHT2p4);
   fChain->SetBranchAddress("MHTclean", &MHTclean, &b_MHTclean);
   fChain->SetBranchAddress("MHTclean2p4", &MHTclean2p4, &b_MHTclean2p4);
   fChain->SetBranchAddress("MHTOnline", &MHTOnline, &b_MHTOnline);
   fChain->SetBranchAddress("MHTPhi", &MHTPhi, &b_MHTPhi);
   fChain->SetBranchAddress("MHTPhi2p4", &MHTPhi2p4, &b_MHTPhi2p4);
   fChain->SetBranchAddress("MHTPhiclean", &MHTPhiclean, &b_MHTPhiclean);
   fChain->SetBranchAddress("MHTPhiclean2p4", &MHTPhiclean2p4, &b_MHTPhiclean2p4);
   fChain->SetBranchAddress("MJJ_AK8", &MJJ_AK8, &b_MJJ_AK8);
   fChain->SetBranchAddress("Mmc_AK8", &Mmc_AK8, &b_Mmc_AK8);
   fChain->SetBranchAddress("MT2", &MT2, &b_MT2);
   fChain->SetBranchAddress("MT_AK8", &MT_AK8, &b_MT_AK8);
   fChain->SetBranchAddress("Muons", &Muons, &b_Muons);
   fChain->SetBranchAddress("Muons_charge", &Muons_charge, &b_Muons_charge);
   fChain->SetBranchAddress("Muons_mediumID", &Muons_mediumID, &b_Muons_mediumID);
   fChain->SetBranchAddress("Muons_MiniIso", &Muons_MiniIso, &b_Muons_MiniIso);
   fChain->SetBranchAddress("Muons_MT2Activity", &Muons_MT2Activity, &b_Muons_MT2Activity);
   fChain->SetBranchAddress("Muons_MTW", &Muons_MTW, &b_Muons_MTW);
   fChain->SetBranchAddress("Muons_passIso", &Muons_passIso, &b_Muons_passIso);
   fChain->SetBranchAddress("Muons_tightID", &Muons_tightID, &b_Muons_tightID);
   fChain->SetBranchAddress("nAllVertices", &nAllVertices, &b_nAllVertices);
   fChain->SetBranchAddress("NElectrons", &NElectrons, &b_NElectrons);
   fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
   fChain->SetBranchAddress("NJetsclean", &NJetsclean, &b_NJetsclean);
   fChain->SetBranchAddress("NMuons", &NMuons, &b_NMuons);
   fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
   fChain->SetBranchAddress("PFCaloMETRatio", &PFCaloMETRatio, &b_PFCaloMETRatio);
   fChain->SetBranchAddress("Photons", &Photons, &b_Photons);
   fChain->SetBranchAddress("Photons_electronFakes", &Photons_electronFakes, &b_Photons_electronFakes);
   fChain->SetBranchAddress("Photons_fullID", &Photons_fullID, &b_Photons_fullID);
   fChain->SetBranchAddress("Photons_genMatched", &Photons_genMatched, &b_Photons_genMatched);
   fChain->SetBranchAddress("Photons_hadTowOverEM", &Photons_hadTowOverEM, &b_Photons_hadTowOverEM);
   fChain->SetBranchAddress("Photons_hasPixelSeed", &Photons_hasPixelSeed, &b_Photons_hasPixelSeed);
   fChain->SetBranchAddress("Photons_isEB", &Photons_isEB, &b_Photons_isEB);
   fChain->SetBranchAddress("Photons_nonPrompt", &Photons_nonPrompt, &b_Photons_nonPrompt);
   fChain->SetBranchAddress("Photons_passElectronVeto", &Photons_passElectronVeto, &b_Photons_passElectronVeto);
   fChain->SetBranchAddress("Photons_pfChargedIso", &Photons_pfChargedIso, &b_Photons_pfChargedIso);
   fChain->SetBranchAddress("Photons_pfChargedIsoRhoCorr", &Photons_pfChargedIsoRhoCorr, &b_Photons_pfChargedIsoRhoCorr);
   fChain->SetBranchAddress("Photons_pfGammaIso", &Photons_pfGammaIso, &b_Photons_pfGammaIso);
   fChain->SetBranchAddress("Photons_pfGammaIsoRhoCorr", &Photons_pfGammaIsoRhoCorr, &b_Photons_pfGammaIsoRhoCorr);
   fChain->SetBranchAddress("Photons_pfNeutralIso", &Photons_pfNeutralIso, &b_Photons_pfNeutralIso);
   fChain->SetBranchAddress("Photons_pfNeutralIsoRhoCorr", &Photons_pfNeutralIsoRhoCorr, &b_Photons_pfNeutralIsoRhoCorr);
   fChain->SetBranchAddress("Photons_sigmaIetaIeta", &Photons_sigmaIetaIeta, &b_Photons_sigmaIetaIeta);
   fChain->SetBranchAddress("PrescaleWeightHT", &PrescaleWeightHT, &b_PrescaleWeightHT);
   fChain->SetBranchAddress("PrimaryVertexFilter", &PrimaryVertexFilter, &b_PrimaryVertexFilter);
   fChain->SetBranchAddress("TAPElectronTracks", &TAPElectronTracks, &b_TAPElectronTracks);
   fChain->SetBranchAddress("TAPElectronTracks_activity", &TAPElectronTracks_activity, &b_TAPElectronTracks_activity);
   fChain->SetBranchAddress("TAPElectronTracks_charge", &TAPElectronTracks_charge, &b_TAPElectronTracks_charge);
   fChain->SetBranchAddress("TAPElectronTracks_mT", &TAPElectronTracks_mT, &b_TAPElectronTracks_mT);
   fChain->SetBranchAddress("TAPElectronTracks_trkiso", &TAPElectronTracks_trkiso, &b_TAPElectronTracks_trkiso);
   fChain->SetBranchAddress("TAPMuonTracks", &TAPMuonTracks, &b_TAPMuonTracks);
   fChain->SetBranchAddress("TAPMuonTracks_activity", &TAPMuonTracks_activity, &b_TAPMuonTracks_activity);
   fChain->SetBranchAddress("TAPMuonTracks_charge", &TAPMuonTracks_charge, &b_TAPMuonTracks_charge);
   fChain->SetBranchAddress("TAPMuonTracks_mT", &TAPMuonTracks_mT, &b_TAPMuonTracks_mT);
   fChain->SetBranchAddress("TAPMuonTracks_trkiso", &TAPMuonTracks_trkiso, &b_TAPMuonTracks_trkiso);
   fChain->SetBranchAddress("TAPPionTracks", &TAPPionTracks, &b_TAPPionTracks);
   fChain->SetBranchAddress("TAPPionTracks_activity", &TAPPionTracks_activity, &b_TAPPionTracks_activity);
   fChain->SetBranchAddress("TAPPionTracks_charge", &TAPPionTracks_charge, &b_TAPPionTracks_charge);
   fChain->SetBranchAddress("TAPPionTracks_mT", &TAPPionTracks_mT, &b_TAPPionTracks_mT);
   fChain->SetBranchAddress("TAPPionTracks_trkiso", &TAPPionTracks_trkiso, &b_TAPPionTracks_trkiso);
   fChain->SetBranchAddress("tracks", &tracks, &b_tracks);
   fChain->SetBranchAddress("tracks_charge", &tracks_charge, &b_tracks_charge);
   fChain->SetBranchAddress("tracks_chargedPtSum", &tracks_chargedPtSum, &b_tracks_chargedPtSum);
   fChain->SetBranchAddress("tracks_chi2perNdof", &tracks_chi2perNdof, &b_tracks_chi2perNdof);
   fChain->SetBranchAddress("tracks_deDxHarmonic2pixel", &tracks_deDxHarmonic2pixel, &b_tracks_deDxHarmonic2pixel);
   fChain->SetBranchAddress("tracks_deDxHarmonic2strips", &tracks_deDxHarmonic2strips, &b_tracks_deDxHarmonic2strips);
   fChain->SetBranchAddress("tracks_dxyVtx", &tracks_dxyVtx, &b_tracks_dxyVtx);
   fChain->SetBranchAddress("tracks_dzVtx", &tracks_dzVtx, &b_tracks_dzVtx);
   fChain->SetBranchAddress("tracks_matchedCaloEnergy", &tracks_matchedCaloEnergy, &b_tracks_matchedCaloEnergy);
   fChain->SetBranchAddress("tracks_matchedCaloEnergyJets", &tracks_matchedCaloEnergyJets, &b_tracks_matchedCaloEnergyJets);
   fChain->SetBranchAddress("tracks_minDrLepton", &tracks_minDrLepton, &b_tracks_minDrLepton);
   fChain->SetBranchAddress("tracks_neutralPtSum", &tracks_neutralPtSum, &b_tracks_neutralPtSum);
   fChain->SetBranchAddress("tracks_neutralWithoutGammaPtSum", &tracks_neutralWithoutGammaPtSum, &b_tracks_neutralWithoutGammaPtSum);
   fChain->SetBranchAddress("tracks_nMissingInnerHits", &tracks_nMissingInnerHits, &b_tracks_nMissingInnerHits);
   fChain->SetBranchAddress("tracks_nMissingMiddleHits", &tracks_nMissingMiddleHits, &b_tracks_nMissingMiddleHits);
   fChain->SetBranchAddress("tracks_nMissingOuterHits", &tracks_nMissingOuterHits, &b_tracks_nMissingOuterHits);
   fChain->SetBranchAddress("tracks_nValidPixelHits", &tracks_nValidPixelHits, &b_tracks_nValidPixelHits);
   fChain->SetBranchAddress("tracks_nValidTrackerHits", &tracks_nValidTrackerHits, &b_tracks_nValidTrackerHits);
   fChain->SetBranchAddress("tracks_passExo16044DeadNoisyECALVeto", &tracks_passExo16044DeadNoisyECALVeto, &b_tracks_passExo16044DeadNoisyECALVeto);
   fChain->SetBranchAddress("tracks_passExo16044GapsVeto", &tracks_passExo16044GapsVeto, &b_tracks_passExo16044GapsVeto);
   fChain->SetBranchAddress("tracks_passExo16044JetIso", &tracks_passExo16044JetIso, &b_tracks_passExo16044JetIso);
   fChain->SetBranchAddress("tracks_passExo16044LepIso", &tracks_passExo16044LepIso, &b_tracks_passExo16044LepIso);
   fChain->SetBranchAddress("tracks_passExo16044Tag", &tracks_passExo16044Tag, &b_tracks_passExo16044Tag);
   fChain->SetBranchAddress("tracks_passPFCandVeto", &tracks_passPFCandVeto, &b_tracks_passPFCandVeto);
   fChain->SetBranchAddress("tracks_pixelLayersWithMeasurement", &tracks_pixelLayersWithMeasurement, &b_tracks_pixelLayersWithMeasurement);
   fChain->SetBranchAddress("tracks_ptError", &tracks_ptError, &b_tracks_ptError);
   fChain->SetBranchAddress("tracks_trackerLayersWithMeasurement", &tracks_trackerLayersWithMeasurement, &b_tracks_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("tracks_trackJetIso", &tracks_trackJetIso, &b_tracks_trackJetIso);
   fChain->SetBranchAddress("tracks_trackQualityConfirmed", &tracks_trackQualityConfirmed, &b_tracks_trackQualityConfirmed);
   fChain->SetBranchAddress("tracks_trackQualityDiscarded", &tracks_trackQualityDiscarded, &b_tracks_trackQualityDiscarded);
   fChain->SetBranchAddress("tracks_trackQualityGoodIterative", &tracks_trackQualityGoodIterative, &b_tracks_trackQualityGoodIterative);
   fChain->SetBranchAddress("tracks_trackQualityHighPurity", &tracks_trackQualityHighPurity, &b_tracks_trackQualityHighPurity);
   fChain->SetBranchAddress("tracks_trackQualityHighPuritySetWithPV", &tracks_trackQualityHighPuritySetWithPV, &b_tracks_trackQualityHighPuritySetWithPV);
   fChain->SetBranchAddress("tracks_trackQualityLoose", &tracks_trackQualityLoose, &b_tracks_trackQualityLoose);
   fChain->SetBranchAddress("tracks_trackQualityLooseSetWithPV", &tracks_trackQualityLooseSetWithPV, &b_tracks_trackQualityLooseSetWithPV);
   fChain->SetBranchAddress("tracks_trackQualitySize", &tracks_trackQualitySize, &b_tracks_trackQualitySize);
   fChain->SetBranchAddress("tracks_trackQualityTight", &tracks_trackQualityTight, &b_tracks_trackQualityTight);
   fChain->SetBranchAddress("tracks_trackQualityUndef", &tracks_trackQualityUndef, &b_tracks_trackQualityUndef);
   fChain->SetBranchAddress("tracks_trkMiniRelIso", &tracks_trkMiniRelIso, &b_tracks_trkMiniRelIso);
   fChain->SetBranchAddress("tracks_trkRelIso", &tracks_trkRelIso, &b_tracks_trkRelIso);
   fChain->SetBranchAddress("TriggerNames", &TriggerNames, &b_TriggerNames);
   fChain->SetBranchAddress("TriggerPass", &TriggerPass, &b_TriggerPass);
   fChain->SetBranchAddress("TriggerPrescales", &TriggerPrescales, &b_TriggerPrescales);
   fChain->SetBranchAddress("TriggerVersion", &TriggerVersion, &b_TriggerVersion);
   fChain->SetBranchAddress("ZCandidates", &ZCandidates, &b_ZCandidates);
   Notify();
}

Bool_t DT::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DT::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DT::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DT_cxx
