// TKEY7 iso20022

typedef Document Document;

// AccountIdentification4Choice 
typedef struct {
	char IBAN;
	GenericAccountIdentification1 Othr;
} AccountIdentification4Choice;

// AccountSchemeName1Choice 
typedef struct {
	char Cd;
	char Prtry;
} AccountSchemeName1Choice;

// ActiveCurrencyAndAmount_SimpleType 
typedef float ActiveCurrencyAndAmount_SimpleType;

// ActiveCurrencyAndAmount 
typedef struct {
	char CcyAttr; // attr
} ActiveCurrencyAndAmount;

// ActiveCurrencyCode 
typedef char ActiveCurrencyCode;

// ActiveOrHistoricCurrencyAndAmount_SimpleType 
typedef float ActiveOrHistoricCurrencyAndAmount_SimpleType;

// ActiveOrHistoricCurrencyAndAmount 
typedef struct {
	char CcyAttr; // attr
} ActiveOrHistoricCurrencyAndAmount;

// ActiveOrHistoricCurrencyCode 
typedef char ActiveOrHistoricCurrencyCode;

// AddressType2Code 
typedef char AddressType2Code;

// AddressType3Choice 
typedef struct {
	char Cd;
	GenericIdentification30 Prtry;
} AddressType3Choice;

// AmendmentInformationDetails14 
typedef struct {
	char OrgnlMndtId;
	PartyIdentification135 OrgnlCdtrSchmeId;
	BranchAndFinancialInstitutionIdentification6 OrgnlCdtrAgt;
	CashAccount40 OrgnlCdtrAgtAcct;
	PartyIdentification135 OrgnlDbtr;
	CashAccount40 OrgnlDbtrAcct;
	BranchAndFinancialInstitutionIdentification6 OrgnlDbtrAgt;
	CashAccount40 OrgnlDbtrAgtAcct;
	char OrgnlFnlColltnDt;
	Frequency36Choice OrgnlFrqcy;
	MandateSetupReason1Choice OrgnlRsn;
	char OrgnlTrckgDays;
} AmendmentInformationDetails14;

// AmountType4Choice 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount InstdAmt;
	EquivalentAmount2 EqvtAmt;
} AmountType4Choice;

// AnyBICDec2014Identifier 
typedef char AnyBICDec2014Identifier;

// BICFIDec2014Identifier 
typedef char BICFIDec2014Identifier;

// BranchAndFinancialInstitutionIdentification6 
typedef struct {
	FinancialInstitutionIdentification18 FinInstnId;
	BranchData3 BrnchId;
} BranchAndFinancialInstitutionIdentification6;

// BranchData3 
typedef struct {
	char Id;
	char LEI;
	char Nm;
	PostalAddress24 PstlAdr;
} BranchData3;

// CancellationIndividualStatus1Code 
typedef char CancellationIndividualStatus1Code;

// CancellationStatusReason3Choice 
typedef struct {
	char Cd;
	char Prtry;
} CancellationStatusReason3Choice;

// CancellationStatusReason4 
typedef struct {
	PartyIdentification135 Orgtr;
	CancellationStatusReason3Choice Rsn;
	char AddtlInf[];
} CancellationStatusReason4;

// Case5 
typedef struct {
	char Id;
	Party40Choice Cretr;
	bool ReopCaseIndctn;
} Case5;

// CaseAssignment5 
typedef struct {
	char Id;
	Party40Choice Assgnr;
	Party40Choice Assgne;
	char CreDtTm;
} CaseAssignment5;

// CashAccount40 
typedef struct {
	AccountIdentification4Choice Id;
	CashAccountType2Choice Tp;
	char Ccy;
	char Nm;
	ProxyAccountIdentification1 Prxy;
} CashAccount40;

// CashAccountType2Choice 
typedef struct {
	char Cd;
	char Prtry;
} CashAccountType2Choice;

// CategoryPurpose1Choice 
typedef struct {
	char Cd;
	char Prtry;
} CategoryPurpose1Choice;

// ChargeBearerType1Code 
typedef char ChargeBearerType1Code;

// ChargeIncludedIndicator 
typedef bool ChargeIncludedIndicator;

// ChargeType3Choice 
typedef struct {
	char Cd;
	GenericIdentification3 Prtry;
} ChargeType3Choice;

// Charges6 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount TtlChrgsAndTaxAmt;
	ChargesRecord3 Rcrd[];
} Charges6;

// Charges9 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount Amt;
	BranchAndFinancialInstitutionIdentification6 Agt;
	CashAccount40 AgtAcct;
} Charges9;

// ChargesRecord3 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount Amt;
	char CdtDbtInd;
	bool ChrgInclInd;
	ChargeType3Choice Tp;
	float Rate;
	char Br;
	BranchAndFinancialInstitutionIdentification6 Agt;
	TaxCharges2 Tax;
} ChargesRecord3;

// ClaimNonReceipt2 
typedef struct {
	char DtPrcd;
	BranchAndFinancialInstitutionIdentification6 OrgnlNxtAgt;
} ClaimNonReceipt2;

// ClaimNonReceipt2Choice 
typedef struct {
	ClaimNonReceipt2 Accptd;
	ClaimNonReceiptRejectReason1Choice Rjctd;
} ClaimNonReceipt2Choice;

// ClaimNonReceiptRejectReason1Choice 
typedef struct {
	char Cd;
	char Prtry;
} ClaimNonReceiptRejectReason1Choice;

// ClearingChannel2Code 
typedef char ClearingChannel2Code;

// ClearingSystemIdentification2Choice 
typedef struct {
	char Cd;
	char Prtry;
} ClearingSystemIdentification2Choice;

// ClearingSystemIdentification3Choice 
typedef struct {
	char Cd;
	char Prtry;
} ClearingSystemIdentification3Choice;

// ClearingSystemMemberIdentification2 
typedef struct {
	ClearingSystemIdentification2Choice ClrSysId;
	char MmbId;
} ClearingSystemMemberIdentification2;

// Compensation4 
typedef struct {
	ActiveCurrencyAndAmount Amt;
	BranchAndFinancialInstitutionIdentification6 DbtrAgt;
	CashAccount40 DbtrAgtAcct;
	BranchAndFinancialInstitutionIdentification6 CdtrAgt;
	CashAccount40 CdtrAgtAcct;
	CompensationReason1Choice Rsn;
} Compensation4;

// CompensationReason1Choice 
typedef struct {
	char Cd;
	char Prtry;
} CompensationReason1Choice;

// Contact4 
typedef struct {
	char NmPrfx;
	char Nm;
	char PhneNb;
	char MobNb;
	char FaxNb;
	char EmailAdr;
	char EmailPurp;
	char JobTitl;
	char Rspnsblty;
	char Dept;
	OtherContact1 Othr[];
	char PrefrdMtd;
} Contact4;

// CorrectiveGroupInformation1 
typedef struct {
	char MsgId;
	char MsgNmId;
	char CreDtTm;
} CorrectiveGroupInformation1;

// CorrectiveInterbankTransaction3 
typedef struct {
	CorrectiveGroupInformation1 GrpHdr;
	char InstrId;
	char EndToEndId;
	char TxId;
	char UETR;
	ActiveOrHistoricCurrencyAndAmount IntrBkSttlmAmt;
	char IntrBkSttlmDt;
} CorrectiveInterbankTransaction3;

// CorrectivePaymentInitiation5 
typedef struct {
	CorrectiveGroupInformation1 GrpHdr;
	char PmtInfId;
	char InstrId;
	char EndToEndId;
	char UETR;
	ActiveOrHistoricCurrencyAndAmount InstdAmt;
	DateAndDateTime2Choice ReqdExctnDt;
	char ReqdColltnDt;
} CorrectivePaymentInitiation5;

// CorrectiveTransaction5Choice 
typedef struct {
	CorrectivePaymentInitiation5 Initn;
	CorrectiveInterbankTransaction3 IntrBk;
} CorrectiveTransaction5Choice;

// CountryCode 
typedef char CountryCode;

// CreditDebitCode 
typedef char CreditDebitCode;

// CreditTransferMandateData1 
typedef struct {
	char MndtId;
	MandateTypeInformation2 Tp;
	char DtOfSgntr;
	char DtOfVrfctn;
	char ElctrncSgntr[];
	char FrstPmtDt;
	char FnlPmtDt;
	Frequency36Choice Frqcy;
	MandateSetupReason1Choice Rsn;
} CreditTransferMandateData1;

// CreditorReferenceInformation2 
typedef struct {
	CreditorReferenceType2 Tp;
	char Ref;
} CreditorReferenceInformation2;

// CreditorReferenceType1Choice 
typedef struct {
	char Cd;
	char Prtry;
} CreditorReferenceType1Choice;

// CreditorReferenceType2 
typedef struct {
	CreditorReferenceType1Choice CdOrPrtry;
	char Issr;
} CreditorReferenceType2;

// DateAndDateTime2Choice 
typedef struct {
	char Dt;
	char DtTm;
} DateAndDateTime2Choice;

// DateAndPlaceOfBirth1 
typedef struct {
	char BirthDt;
	char PrvcOfBirth;
	char CityOfBirth;
	char CtryOfBirth;
} DateAndPlaceOfBirth1;

// DatePeriod2 
typedef struct {
	char FrDt;
	char ToDt;
} DatePeriod2;

// DecimalNumber 
typedef float DecimalNumber;

// DiscountAmountAndType1 
typedef struct {
	DiscountAmountType1Choice Tp;
	ActiveOrHistoricCurrencyAndAmount Amt;
} DiscountAmountAndType1;

// DiscountAmountType1Choice 
typedef struct {
	char Cd;
	char Prtry;
} DiscountAmountType1Choice;

// DocumentAdjustment1 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount Amt;
	char CdtDbtInd;
	char Rsn;
	char AddtlInf;
} DocumentAdjustment1;

// DocumentLineIdentification1 
typedef struct {
	DocumentLineType1 Tp;
	char Nb;
	char RltdDt;
} DocumentLineIdentification1;

// DocumentLineInformation1 
typedef struct {
	DocumentLineIdentification1 Id[];
	char Desc;
	RemittanceAmount3 Amt;
} DocumentLineInformation1;

// DocumentLineType1 
typedef struct {
	DocumentLineType1Choice CdOrPrtry;
	char Issr;
} DocumentLineType1;

// DocumentLineType1Choice 
typedef struct {
	char Cd;
	char Prtry;
} DocumentLineType1Choice;

// DocumentType3Code 
typedef char DocumentType3Code;

// DocumentType6Code 
typedef char DocumentType6Code;

// EquivalentAmount2 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount Amt;
	char CcyOfTrf;
} EquivalentAmount2;

// Exact2NumericText 
typedef char Exact2NumericText;

// Exact4AlphaNumericText 
typedef char Exact4AlphaNumericText;

// ExternalAccountIdentification1Code 
typedef char ExternalAccountIdentification1Code;

// ExternalCashAccountType1Code 
typedef char ExternalCashAccountType1Code;

// ExternalCashClearingSystem1Code 
typedef char ExternalCashClearingSystem1Code;

// ExternalCategoryPurpose1Code 
typedef char ExternalCategoryPurpose1Code;

// ExternalChargeType1Code 
typedef char ExternalChargeType1Code;

// ExternalClaimNonReceiptRejection1Code 
typedef char ExternalClaimNonReceiptRejection1Code;

// ExternalClearingSystemIdentification1Code 
typedef char ExternalClearingSystemIdentification1Code;

// ExternalDiscountAmountType1Code 
typedef char ExternalDiscountAmountType1Code;

// ExternalDocumentLineType1Code 
typedef char ExternalDocumentLineType1Code;

// ExternalFinancialInstitutionIdentification1Code 
typedef char ExternalFinancialInstitutionIdentification1Code;

// ExternalGarnishmentType1Code 
typedef char ExternalGarnishmentType1Code;

// ExternalInvestigationExecutionConfirmation1Code 
typedef char ExternalInvestigationExecutionConfirmation1Code;

// ExternalLocalInstrument1Code 
typedef char ExternalLocalInstrument1Code;

// ExternalMandateSetupReason1Code 
typedef char ExternalMandateSetupReason1Code;

// ExternalOrganisationIdentification1Code 
typedef char ExternalOrganisationIdentification1Code;

// ExternalPaymentCancellationRejection1Code 
typedef char ExternalPaymentCancellationRejection1Code;

// ExternalPaymentCompensationReason1Code 
typedef char ExternalPaymentCompensationReason1Code;

// ExternalPaymentModificationRejection1Code 
typedef char ExternalPaymentModificationRejection1Code;

// ExternalPersonIdentification1Code 
typedef char ExternalPersonIdentification1Code;

// ExternalProxyAccountType1Code 
typedef char ExternalProxyAccountType1Code;

// ExternalPurpose1Code 
typedef char ExternalPurpose1Code;

// ExternalServiceLevel1Code 
typedef char ExternalServiceLevel1Code;

// ExternalTaxAmountType1Code 
typedef char ExternalTaxAmountType1Code;

// FinancialIdentificationSchemeName1Choice 
typedef struct {
	char Cd;
	char Prtry;
} FinancialIdentificationSchemeName1Choice;

// FinancialInstitutionIdentification18 
typedef struct {
	char BICFI;
	ClearingSystemMemberIdentification2 ClrSysMmbId;
	char LEI;
	char Nm;
	PostalAddress24 PstlAdr;
	GenericFinancialIdentification1 Othr;
} FinancialInstitutionIdentification18;

// Frequency36Choice 
typedef struct {
	char Tp;
	FrequencyPeriod1 Prd;
	FrequencyAndMoment1 PtInTm;
} Frequency36Choice;

// Frequency6Code 
typedef char Frequency6Code;

// FrequencyAndMoment1 
typedef struct {
	char Tp;
	char PtInTm;
} FrequencyAndMoment1;

// FrequencyPeriod1 
typedef struct {
	char Tp;
	float CntPerPrd;
} FrequencyPeriod1;

// Garnishment3 
typedef struct {
	GarnishmentType1 Tp;
	PartyIdentification135 Grnshee;
	PartyIdentification135 GrnshmtAdmstr;
	char RefNb;
	char Dt;
	ActiveOrHistoricCurrencyAndAmount RmtdAmt;
	bool FmlyMdclInsrncInd;
	bool MplyeeTermntnInd;
} Garnishment3;

// GarnishmentType1 
typedef struct {
	GarnishmentType1Choice CdOrPrtry;
	char Issr;
} GarnishmentType1;

// GarnishmentType1Choice 
typedef struct {
	char Cd;
	char Prtry;
} GarnishmentType1Choice;

// GenericAccountIdentification1 
typedef struct {
	char Id;
	AccountSchemeName1Choice SchmeNm;
	char Issr;
} GenericAccountIdentification1;

// GenericFinancialIdentification1 
typedef struct {
	char Id;
	FinancialIdentificationSchemeName1Choice SchmeNm;
	char Issr;
} GenericFinancialIdentification1;

// GenericIdentification3 
typedef struct {
	char Id;
	char Issr;
} GenericIdentification3;

// GenericIdentification30 
typedef struct {
	char Id;
	char Issr;
	char SchmeNm;
} GenericIdentification30;

// GenericOrganisationIdentification1 
typedef struct {
	char Id;
	OrganisationIdentificationSchemeName1Choice SchmeNm;
	char Issr;
} GenericOrganisationIdentification1;

// GenericPersonIdentification1 
typedef struct {
	char Id;
	PersonIdentificationSchemeName1Choice SchmeNm;
	char Issr;
} GenericPersonIdentification1;

// GroupCancellationStatus1Code 
typedef char GroupCancellationStatus1Code;

// IBAN2007Identifier 
typedef char IBAN2007Identifier;

// ISODate 
typedef char ISODate;

// ISODateTime 
typedef char ISODateTime;

// ISOYear 
typedef char ISOYear;

// InvestigationStatus5Choice 
typedef struct {
	char Conf;
	ModificationStatusReason1Choice RjctdMod[];
	Case5 DplctOf;
	bool AssgnmtCxlConf;
} InvestigationStatus5Choice;

// LEIIdentifier 
typedef char LEIIdentifier;

// LocalInstrument2Choice 
typedef struct {
	char Cd;
	char Prtry;
} LocalInstrument2Choice;

// MandateClassification1Choice 
typedef struct {
	char Cd;
	char Prtry;
} MandateClassification1Choice;

// MandateClassification1Code 
typedef char MandateClassification1Code;

// MandateRelatedData2Choice 
typedef struct {
	MandateRelatedInformation15 DrctDbtMndt;
	CreditTransferMandateData1 CdtTrfMndt;
} MandateRelatedData2Choice;

// MandateRelatedInformation15 
typedef struct {
	char MndtId;
	char DtOfSgntr;
	bool AmdmntInd;
	AmendmentInformationDetails14 AmdmntInfDtls;
	char ElctrncSgntr;
	char FrstColltnDt;
	char FnlColltnDt;
	Frequency36Choice Frqcy;
	MandateSetupReason1Choice Rsn;
	char TrckgDays;
} MandateRelatedInformation15;

// MandateSetupReason1Choice 
typedef struct {
	char Cd;
	char Prtry;
} MandateSetupReason1Choice;

// MandateTypeInformation2 
typedef struct {
	ServiceLevel8Choice SvcLvl;
	LocalInstrument2Choice LclInstrm;
	CategoryPurpose1Choice CtgyPurp;
	MandateClassification1Choice Clssfctn;
} MandateTypeInformation2;

// Max1025Text 
typedef char Max1025Text;

// Max105Text 
typedef char Max105Text;

// Max10KBinary 
typedef char Max10KBinary[];

// Max128Text 
typedef char Max128Text;

// Max140Text 
typedef char Max140Text;

// Max15NumericText 
typedef char Max15NumericText;

// Max16Text 
typedef char Max16Text;

// Max2048Text 
typedef char Max2048Text;

// Max34Text 
typedef char Max34Text;

// Max350Text 
typedef char Max350Text;

// Max35Text 
typedef char Max35Text;

// Max4Text 
typedef char Max4Text;

// Max70Text 
typedef char Max70Text;

// ModificationStatusReason1Choice 
typedef struct {
	char Cd;
	char Prtry;
} ModificationStatusReason1Choice;

// ModificationStatusReason2 
typedef struct {
	PartyIdentification135 Orgtr;
	ModificationStatusReason1Choice Rsn;
	char AddtlInf[];
} ModificationStatusReason2;

// NamePrefix2Code 
typedef char NamePrefix2Code;

// Number 
typedef float Number;

// NumberOfCancellationsPerStatus1 
typedef struct {
	char DtldNbOfTxs;
	char DtldSts;
	float DtldCtrlSum;
} NumberOfCancellationsPerStatus1;

// NumberOfTransactionsPerStatus1 
typedef struct {
	char DtldNbOfTxs;
	char DtldSts;
	float DtldCtrlSum;
} NumberOfTransactionsPerStatus1;

// OrganisationIdentification29 
typedef struct {
	char AnyBIC;
	char LEI;
	GenericOrganisationIdentification1 Othr[];
} OrganisationIdentification29;

// OrganisationIdentificationSchemeName1Choice 
typedef struct {
	char Cd;
	char Prtry;
} OrganisationIdentificationSchemeName1Choice;

// OriginalGroupHeader14 
typedef struct {
	char OrgnlGrpCxlId;
	Case5 RslvdCase;
	char OrgnlMsgId;
	char OrgnlMsgNmId;
	char OrgnlCreDtTm;
	char OrgnlNbOfTxs;
	float OrgnlCtrlSum;
	char GrpCxlSts;
	CancellationStatusReason4 CxlStsRsnInf[];
	NumberOfTransactionsPerStatus1 NbOfTxsPerCxlSts[];
} OriginalGroupHeader14;

// OriginalGroupInformation29 
typedef struct {
	char OrgnlMsgId;
	char OrgnlMsgNmId;
	char OrgnlCreDtTm;
} OriginalGroupInformation29;

// OriginalPaymentInstruction43 
typedef struct {
	char OrgnlPmtInfCxlId;
	Case5 RslvdCase;
	char OrgnlPmtInfId;
	OriginalGroupInformation29 OrgnlGrpInf;
	char OrgnlNbOfTxs;
	float OrgnlCtrlSum;
	char PmtInfCxlSts;
	CancellationStatusReason4 CxlStsRsnInf[];
	NumberOfCancellationsPerStatus1 NbOfTxsPerCxlSts[];
	PaymentTransaction139 TxInfAndSts[];
} OriginalPaymentInstruction43;

// OriginalTransactionReference35 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount IntrBkSttlmAmt;
	AmountType4Choice Amt;
	char IntrBkSttlmDt;
	char ReqdColltnDt;
	DateAndDateTime2Choice ReqdExctnDt;
	PartyIdentification135 CdtrSchmeId;
	SettlementInstruction11 SttlmInf;
	PaymentTypeInformation27 PmtTpInf;
	char PmtMtd;
	MandateRelatedData2Choice MndtRltdInf;
	RemittanceInformation21 RmtInf;
	Party40Choice UltmtDbtr;
	Party40Choice Dbtr;
	CashAccount40 DbtrAcct;
	BranchAndFinancialInstitutionIdentification6 DbtrAgt;
	CashAccount40 DbtrAgtAcct;
	BranchAndFinancialInstitutionIdentification6 CdtrAgt;
	CashAccount40 CdtrAgtAcct;
	Party40Choice Cdtr;
	CashAccount40 CdtrAcct;
	Party40Choice UltmtCdtr;
	Purpose2Choice Purp;
} OriginalTransactionReference35;

// OtherContact1 
typedef struct {
	char ChanlTp;
	char Id;
} OtherContact1;

// Party38Choice 
typedef struct {
	OrganisationIdentification29 OrgId;
	PersonIdentification13 PrvtId;
} Party38Choice;

// Party40Choice 
typedef struct {
	PartyIdentification135 Pty;
	BranchAndFinancialInstitutionIdentification6 Agt;
} Party40Choice;

// PartyIdentification135 
typedef struct {
	char Nm;
	PostalAddress24 PstlAdr;
	Party38Choice Id;
	char CtryOfRes;
	Contact4 CtctDtls;
} PartyIdentification135;

// PaymentMethod4Code 
typedef char PaymentMethod4Code;

// PaymentTransaction132 
typedef struct {
	char ModStsId;
	Case5 RslvdCase;
	OriginalGroupInformation29 OrgnlGrpInf;
	char OrgnlPmtInfId;
	char OrgnlInstrId;
	char OrgnlEndToEndId;
	char OrgnlTxId;
	char OrgnlClrSysRef;
	char OrgnlUETR;
	ModificationStatusReason2 ModStsRsnInf[];
	ResolutionData3 RsltnRltdInf;
	ActiveOrHistoricCurrencyAndAmount OrgnlIntrBkSttlmAmt;
	char OrgnlIntrBkSttlmDt;
	Party40Choice Assgnr;
	Party40Choice Assgne;
	OriginalTransactionReference35 OrgnlTxRef;
} PaymentTransaction132;

// PaymentTransaction138 
typedef struct {
	char CxlStsId;
	Case5 RslvdCase;
	OriginalGroupInformation29 OrgnlGrpInf;
	char OrgnlInstrId;
	char OrgnlEndToEndId;
	char OrgnlTxId;
	char OrgnlClrSysRef;
	char OrgnlUETR;
	char TxCxlSts;
	CancellationStatusReason4 CxlStsRsnInf[];
	ResolutionData3 RsltnRltdInf;
	ActiveOrHistoricCurrencyAndAmount OrgnlIntrBkSttlmAmt;
	char OrgnlIntrBkSttlmDt;
	Party40Choice Assgnr;
	Party40Choice Assgne;
	OriginalTransactionReference35 OrgnlTxRef;
} PaymentTransaction138;

// PaymentTransaction139 
typedef struct {
	char CxlStsId;
	Case5 RslvdCase;
	char OrgnlInstrId;
	char OrgnlEndToEndId;
	char UETR;
	char TxCxlSts;
	CancellationStatusReason4 CxlStsRsnInf[];
	ActiveOrHistoricCurrencyAndAmount OrgnlInstdAmt;
	DateAndDateTime2Choice OrgnlReqdExctnDt;
	char OrgnlReqdColltnDt;
	OriginalTransactionReference35 OrgnlTxRef;
} PaymentTransaction139;

// PaymentTypeInformation27 
typedef struct {
	char InstrPrty;
	char ClrChanl;
	ServiceLevel8Choice SvcLvl[];
	LocalInstrument2Choice LclInstrm;
	char SeqTp;
	CategoryPurpose1Choice CtgyPurp;
} PaymentTypeInformation27;

// PercentageRate 
typedef float PercentageRate;

// PersonIdentification13 
typedef struct {
	DateAndPlaceOfBirth1 DtAndPlcOfBirth;
	GenericPersonIdentification1 Othr[];
} PersonIdentification13;

// PersonIdentificationSchemeName1Choice 
typedef struct {
	char Cd;
	char Prtry;
} PersonIdentificationSchemeName1Choice;

// PhoneNumber 
typedef char PhoneNumber;

// PostalAddress24 
typedef struct {
	AddressType3Choice AdrTp;
	char Dept;
	char SubDept;
	char StrtNm;
	char BldgNb;
	char BldgNm;
	char Flr;
	char PstBx;
	char Room;
	char PstCd;
	char TwnNm;
	char TwnLctnNm;
	char DstrctNm;
	char CtrySubDvsn;
	char Ctry;
	char AdrLine[];
} PostalAddress24;

// PreferredContactMethod1Code 
typedef char PreferredContactMethod1Code;

// Priority2Code 
typedef char Priority2Code;

// ProxyAccountIdentification1 
typedef struct {
	ProxyAccountType1Choice Tp;
	char Id;
} ProxyAccountIdentification1;

// ProxyAccountType1Choice 
typedef struct {
	char Cd;
	char Prtry;
} ProxyAccountType1Choice;

// Purpose2Choice 
typedef struct {
	char Cd;
	char Prtry;
} Purpose2Choice;

// ReferredDocumentInformation7 
typedef struct {
	ReferredDocumentType4 Tp;
	char Nb;
	char RltdDt;
	DocumentLineInformation1 LineDtls[];
} ReferredDocumentInformation7;

// ReferredDocumentType3Choice 
typedef struct {
	char Cd;
	char Prtry;
} ReferredDocumentType3Choice;

// ReferredDocumentType4 
typedef struct {
	ReferredDocumentType3Choice CdOrPrtry;
	char Issr;
} ReferredDocumentType4;

// RemittanceAmount2 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount DuePyblAmt;
	DiscountAmountAndType1 DscntApldAmt[];
	ActiveOrHistoricCurrencyAndAmount CdtNoteAmt;
	TaxAmountAndType1 TaxAmt[];
	DocumentAdjustment1 AdjstmntAmtAndRsn[];
	ActiveOrHistoricCurrencyAndAmount RmtdAmt;
} RemittanceAmount2;

// RemittanceAmount3 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount DuePyblAmt;
	DiscountAmountAndType1 DscntApldAmt[];
	ActiveOrHistoricCurrencyAndAmount CdtNoteAmt;
	TaxAmountAndType1 TaxAmt[];
	DocumentAdjustment1 AdjstmntAmtAndRsn[];
	ActiveOrHistoricCurrencyAndAmount RmtdAmt;
} RemittanceAmount3;

// RemittanceInformation21 
typedef struct {
	char Ustrd[];
	StructuredRemittanceInformation17 Strd[];
} RemittanceInformation21;

// ResolutionData3 
typedef struct {
	char EndToEndId;
	char TxId;
	char UETR;
	ActiveOrHistoricCurrencyAndAmount IntrBkSttlmAmt;
	char IntrBkSttlmDt;
	char ClrChanl;
	Compensation4 Compstn;
	Charges9 Chrgs[];
} ResolutionData3;

// ResolutionOfInvestigationV11 
typedef struct {
	CaseAssignment5 Assgnmt;
	Case5 RslvdCase;
	InvestigationStatus5Choice Sts;
	UnderlyingTransaction29 CxlDtls[];
	PaymentTransaction132 ModDtls;
	ClaimNonReceipt2Choice ClmNonRctDtls;
	StatementResolutionEntry4 StmtDtls;
	CorrectiveTransaction5Choice CrrctnTx;
	ResolutionData3 RsltnRltdInf;
	SupplementaryData1 SplmtryData[];
} ResolutionOfInvestigationV11;

// SequenceType3Code 
typedef char SequenceType3Code;

// ServiceLevel8Choice 
typedef struct {
	char Cd;
	char Prtry;
} ServiceLevel8Choice;

// SettlementInstruction11 
typedef struct {
	char SttlmMtd;
	CashAccount40 SttlmAcct;
	ClearingSystemIdentification3Choice ClrSys;
	BranchAndFinancialInstitutionIdentification6 InstgRmbrsmntAgt;
	CashAccount40 InstgRmbrsmntAgtAcct;
	BranchAndFinancialInstitutionIdentification6 InstdRmbrsmntAgt;
	CashAccount40 InstdRmbrsmntAgtAcct;
	BranchAndFinancialInstitutionIdentification6 ThrdRmbrsmntAgt;
	CashAccount40 ThrdRmbrsmntAgtAcct;
} SettlementInstruction11;

// SettlementMethod1Code 
typedef char SettlementMethod1Code;

// StatementResolutionEntry4 
typedef struct {
	OriginalGroupInformation29 OrgnlGrpInf;
	char OrgnlStmtId;
	char UETR;
	char AcctSvcrRef;
	ActiveOrHistoricCurrencyAndAmount CrrctdAmt;
	Charges6 Chrgs[];
	Purpose2Choice Purp;
} StatementResolutionEntry4;

// StructuredRemittanceInformation17 
typedef struct {
	ReferredDocumentInformation7 RfrdDocInf[];
	RemittanceAmount2 RfrdDocAmt;
	CreditorReferenceInformation2 CdtrRefInf;
	PartyIdentification135 Invcr;
	PartyIdentification135 Invcee;
	TaxData1 TaxRmt;
	Garnishment3 GrnshmtRmt;
	char AddtlRmtInf[];
} StructuredRemittanceInformation17;

// SupplementaryData1 
typedef struct {
	char PlcAndNm;
	SupplementaryDataEnvelope1 Envlp;
} SupplementaryData1;

// SupplementaryDataEnvelope1 
typedef struct {
} SupplementaryDataEnvelope1;

// TaxAmount3 
typedef struct {
	float Rate;
	ActiveOrHistoricCurrencyAndAmount TaxblBaseAmt;
	ActiveOrHistoricCurrencyAndAmount TtlAmt;
	TaxRecordDetails3 Dtls[];
} TaxAmount3;

// TaxAmountAndType1 
typedef struct {
	TaxAmountType1Choice Tp;
	ActiveOrHistoricCurrencyAndAmount Amt;
} TaxAmountAndType1;

// TaxAmountType1Choice 
typedef struct {
	char Cd;
	char Prtry;
} TaxAmountType1Choice;

// TaxAuthorisation1 
typedef struct {
	char Titl;
	char Nm;
} TaxAuthorisation1;

// TaxCharges2 
typedef struct {
	char Id;
	float Rate;
	ActiveOrHistoricCurrencyAndAmount Amt;
} TaxCharges2;

// TaxData1 
typedef struct {
	TaxParty1 Cdtr;
	TaxParty2 Dbtr;
	TaxParty2 UltmtDbtr;
	char AdmstnZone;
	char RefNb;
	char Mtd;
	ActiveOrHistoricCurrencyAndAmount TtlTaxblBaseAmt;
	ActiveOrHistoricCurrencyAndAmount TtlTaxAmt;
	char Dt;
	float SeqNb;
	TaxRecord3 Rcrd[];
} TaxData1;

// TaxParty1 
typedef struct {
	char TaxId;
	char RegnId;
	char TaxTp;
} TaxParty1;

// TaxParty2 
typedef struct {
	char TaxId;
	char RegnId;
	char TaxTp;
	TaxAuthorisation1 Authstn;
} TaxParty2;

// TaxPeriod3 
typedef struct {
	char Yr;
	char Tp;
	DatePeriod2 FrToDt;
} TaxPeriod3;

// TaxRecord3 
typedef struct {
	char Tp;
	char Ctgy;
	char CtgyDtls;
	char DbtrSts;
	char CertId;
	char FrmsCd;
	TaxPeriod3 Prd;
	TaxAmount3 TaxAmt;
	char AddtlInf;
} TaxRecord3;

// TaxRecordDetails3 
typedef struct {
	TaxPeriod3 Prd;
	ActiveOrHistoricCurrencyAndAmount Amt;
} TaxRecordDetails3;

// TaxRecordPeriod1Code 
typedef char TaxRecordPeriod1Code;

// TransactionIndividualStatus1Code 
typedef char TransactionIndividualStatus1Code;

// TrueFalseIndicator 
typedef bool TrueFalseIndicator;

// UUIDv4Identifier 
typedef char UUIDv4Identifier;

// UnderlyingTransaction29 
typedef struct {
	OriginalGroupHeader14 OrgnlGrpInfAndSts;
	OriginalPaymentInstruction43 OrgnlPmtInfAndSts[];
	PaymentTransaction138 TxInfAndSts[];
} UnderlyingTransaction29;

// YesNoIndicator 
typedef bool YesNoIndicator;
