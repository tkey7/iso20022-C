// TKEY7 iso20022

typedef Document Document;

// Max35Text 
typedef char Max35Text;

// ISODateTime 
typedef char ISODateTime;

// BatchBookingIndicator 
typedef bool BatchBookingIndicator;

// Max15NumericText 
typedef char Max15NumericText;

// DecimalNumber 
typedef float DecimalNumber;

// ActiveCurrencyAndAmount_SimpleType 
typedef float ActiveCurrencyAndAmount_SimpleType;

// ActiveCurrencyAndAmount 
typedef struct {
	char CcyAttr; // attr
} ActiveCurrencyAndAmount;

// ActiveCurrencyCode 
typedef char ActiveCurrencyCode;

// ISODate 
typedef char ISODate;

// SettlementInstruction4 
typedef struct {
	char SttlmMtd;
	CashAccount24 SttlmAcct;
	ClearingSystemIdentification3Choice ClrSys;
	BranchAndFinancialInstitutionIdentification5 InstgRmbrsmntAgt;
	CashAccount24 InstgRmbrsmntAgtAcct;
	BranchAndFinancialInstitutionIdentification5 InstdRmbrsmntAgt;
	CashAccount24 InstdRmbrsmntAgtAcct;
	BranchAndFinancialInstitutionIdentification5 ThrdRmbrsmntAgt;
	CashAccount24 ThrdRmbrsmntAgtAcct;
} SettlementInstruction4;

// SettlementMethod1Code 
typedef char SettlementMethod1Code;

// ClearingSystemIdentification3Choice 
typedef struct {
	char Cd;
	char Prtry;
} ClearingSystemIdentification3Choice;

// ExternalCashClearingSystem1Code 
typedef char ExternalCashClearingSystem1Code;

// CashAccount24 
typedef struct {
	AccountIdentification4Choice Id;
	CashAccountType2Choice Tp;
	char Ccy;
	char Nm;
} CashAccount24;

// AccountIdentification4Choice 
typedef struct {
	char IBAN;
	GenericAccountIdentification1 Othr;
} AccountIdentification4Choice;

// IBAN2007Identifier 
typedef char IBAN2007Identifier;

// GenericAccountIdentification1 
typedef struct {
	char Id;
	AccountSchemeName1Choice SchmeNm;
	char Issr;
} GenericAccountIdentification1;

// Max34Text 
typedef char Max34Text;

// AccountSchemeName1Choice 
typedef struct {
	char Cd;
	char Prtry;
} AccountSchemeName1Choice;

// ExternalAccountIdentification1Code 
typedef char ExternalAccountIdentification1Code;

// CashAccountType2Choice 
typedef struct {
	char Cd;
	char Prtry;
} CashAccountType2Choice;

// ExternalCashAccountType1Code 
typedef char ExternalCashAccountType1Code;

// ActiveOrHistoricCurrencyCode 
typedef char ActiveOrHistoricCurrencyCode;

// Max70Text 
typedef char Max70Text;

// BranchAndFinancialInstitutionIdentification5 
typedef struct {
	FinancialInstitutionIdentification8 FinInstnId;
	BranchData2 BrnchId;
} BranchAndFinancialInstitutionIdentification5;

// FinancialInstitutionIdentification8 
typedef struct {
	char BICFI;
	ClearingSystemMemberIdentification2 ClrSysMmbId;
	char Nm;
	PostalAddress6 PstlAdr;
	GenericFinancialIdentification1 Othr;
} FinancialInstitutionIdentification8;

// BICFIIdentifier 
typedef char BICFIIdentifier;

// ClearingSystemMemberIdentification2 
typedef struct {
	ClearingSystemIdentification2Choice ClrSysId;
	char MmbId;
} ClearingSystemMemberIdentification2;

// ClearingSystemIdentification2Choice 
typedef struct {
	char Cd;
	char Prtry;
} ClearingSystemIdentification2Choice;

// ExternalClearingSystemIdentification1Code 
typedef char ExternalClearingSystemIdentification1Code;

// Max140Text 
typedef char Max140Text;

// PostalAddress6 
typedef struct {
	char AdrTp;
	char Dept;
	char SubDept;
	char StrtNm;
	char BldgNb;
	char PstCd;
	char TwnNm;
	char CtrySubDvsn;
	char Ctry;
	char AdrLine[];
} PostalAddress6;

// AddressType2Code 
typedef char AddressType2Code;

// Max16Text 
typedef char Max16Text;

// CountryCode 
typedef char CountryCode;

// GenericFinancialIdentification1 
typedef struct {
	char Id;
	FinancialIdentificationSchemeName1Choice SchmeNm;
	char Issr;
} GenericFinancialIdentification1;

// FinancialIdentificationSchemeName1Choice 
typedef struct {
	char Cd;
	char Prtry;
} FinancialIdentificationSchemeName1Choice;

// ExternalFinancialInstitutionIdentification1Code 
typedef char ExternalFinancialInstitutionIdentification1Code;

// BranchData2 
typedef struct {
	char Id;
	char Nm;
	PostalAddress6 PstlAdr;
} BranchData2;

// PaymentTypeInformation21 
typedef struct {
	char InstrPrty;
	char ClrChanl;
	ServiceLevel8Choice SvcLvl;
	LocalInstrument2Choice LclInstrm;
	CategoryPurpose1Choice CtgyPurp;
} PaymentTypeInformation21;

// Priority2Code 
typedef char Priority2Code;

// ClearingChannel2Code 
typedef char ClearingChannel2Code;

// ServiceLevel8Choice 
typedef struct {
	char Cd;
	char Prtry;
} ServiceLevel8Choice;

// ExternalServiceLevel1Code 
typedef char ExternalServiceLevel1Code;

// LocalInstrument2Choice 
typedef struct {
	char Cd;
	char Prtry;
} LocalInstrument2Choice;

// ExternalLocalInstrument1Code 
typedef char ExternalLocalInstrument1Code;

// CategoryPurpose1Choice 
typedef struct {
	char Cd;
	char Prtry;
} CategoryPurpose1Choice;

// ExternalCategoryPurpose1Code 
typedef char ExternalCategoryPurpose1Code;

// GroupHeader70 
typedef struct {
	char MsgId;
	char CreDtTm;
	bool BtchBookg;
	char NbOfTxs;
	float CtrlSum;
	ActiveCurrencyAndAmount TtlIntrBkSttlmAmt;
	char IntrBkSttlmDt;
	SettlementInstruction4 SttlmInf;
	PaymentTypeInformation21 PmtTpInf;
	BranchAndFinancialInstitutionIdentification5 InstgAgt;
	BranchAndFinancialInstitutionIdentification5 InstdAgt;
} GroupHeader70;

// TransactionSettlementNotificationV01 
typedef struct {
	GroupHeader70 GrpHdr;
	TransactionSettlementInformation1 TxSttlmInf[];
} TransactionSettlementNotificationV01;

// TransactionSettlementInformation1 
typedef struct {
	OriginalGroupInformation3 OrgnlGrpInf;
	PaymentTransactionInformation2 TxInf[];
} TransactionSettlementInformation1;

// PaymentTransactionInformation2 
typedef struct {
	char SttlmId;
	char OrgnlInstrId;
	char OrgnlEndToEndId;
	char OrgnlTxId;
	CurrencyAndAmount ActlSttlmAmt;
	OriginalTransactionReference1 OrgnlTxRef;
} PaymentTransactionInformation2;

// CurrencyAndAmount 
typedef struct {
	char CcyAttr; // attr
} CurrencyAndAmount;

// OriginalGroupInformation3 
typedef struct {
	char OrgnlMsgId;
	char OrgnlMsgNmId;
	char OrgnlCreDtTm;
} OriginalGroupInformation3;

// CurrencyAndAmount_SimpleType 
typedef float CurrencyAndAmount_SimpleType;

// CurrencyCode 
typedef char CurrencyCode;

// OriginalTransactionReference1 
typedef struct {
	CurrencyAndAmount IntrBkSttlmAmt;
	AmountType2Choice Amt;
	char IntrBkSttlmDt;
	char ReqdExctnDt;
	char ReqdColltnDt;
	PartyIdentification8 CdtrSchmeId;
	SettlementInformation3 SttlmInf;
	PaymentTypeInformation6 PmtTpInf;
	char PmtMtd;
	MandateRelatedInformation1 MndtRltdInf;
	RemittanceInformation1 RmtInf;
	PartyIdentification8 UltmtDbtr;
	PartyIdentification8 Dbtr;
	CashAccount7 DbtrAcct;
	BranchAndFinancialInstitutionIdentification3 DbtrAgt;
	CashAccount7 DbtrAgtAcct;
	BranchAndFinancialInstitutionIdentification3 CdtrAgt;
	CashAccount7 CdtrAgtAcct;
	PartyIdentification8 Cdtr;
	CashAccount7 CdtrAcct;
	PartyIdentification8 UltmtCdtr;
} OriginalTransactionReference1;

// AmountType2Choice 
typedef struct {
	CurrencyAndAmount InstdAmt;
	EquivalentAmount EqvtAmt;
} AmountType2Choice;

// EquivalentAmount 
typedef struct {
	CurrencyAndAmount Amt;
	char CcyOfTrf;
} EquivalentAmount;

// PartyIdentification8 
typedef struct {
	char Nm;
	PostalAddress1 PstlAdr;
	Party2Choice Id;
	char CtryOfRes;
} PartyIdentification8;

// PostalAddress1 
typedef struct {
	char AdrTp;
	char AdrLine[];
	char StrtNm;
	char BldgNb;
	char PstCd;
	char TwnNm;
	char CtrySubDvsn;
	char Ctry;
} PostalAddress1;

// Party2Choice 
typedef struct {
	OrganisationIdentification2 OrgId;
	PersonIdentification3 PrvtId[];
} Party2Choice;

// OrganisationIdentification2 
typedef struct {
	char BIC;
	char IBEI;
	char BEI;
	char EANGLN;
	char USCHU;
	char DUNS;
	char BkPtyId;
	char TaxIdNb;
	GenericIdentification3 PrtryId;
} OrganisationIdentification2;

// BICIdentifier 
typedef char BICIdentifier;

// IBEIIdentifier 
typedef char IBEIIdentifier;

// BEIIdentifier 
typedef char BEIIdentifier;

// EANGLNIdentifier 
typedef char EANGLNIdentifier;

// CHIPSUniversalIdentifier 
typedef char CHIPSUniversalIdentifier;

// DunsIdentifier 
typedef char DunsIdentifier;

// GenericIdentification3 
typedef struct {
	char Id;
	char Issr;
} GenericIdentification3;

// PersonIdentification3 
typedef struct {
	char DrvrsLicNb;
	char CstmrNb;
	char SclSctyNb;
	char AlnRegnNb;
	char PsptNb;
	char TaxIdNb;
	char IdntyCardNb;
	char MplyrIdNb;
	DateAndPlaceOfBirth DtAndPlcOfBirth;
	GenericIdentification4 OthrId;
	char Issr;
} PersonIdentification3;

// DateAndPlaceOfBirth 
typedef struct {
	char BirthDt;
	char PrvcOfBirth;
	char CityOfBirth;
	char CtryOfBirth;
} DateAndPlaceOfBirth;

// GenericIdentification4 
typedef struct {
	char Id;
	char IdTp;
} GenericIdentification4;

// SettlementInformation3 
typedef struct {
	char SttlmMtd;
	CashAccount7 SttlmAcct;
	ClearingSystemIdentification1Choice ClrSys;
	BranchAndFinancialInstitutionIdentification3 InstgRmbrsmntAgt;
	CashAccount7 InstgRmbrsmntAgtAcct;
	BranchAndFinancialInstitutionIdentification3 InstdRmbrsmntAgt;
	CashAccount7 InstdRmbrsmntAgtAcct;
	BranchAndFinancialInstitutionIdentification3 ThrdRmbrsmntAgt;
	CashAccount7 ThrdRmbrsmntAgtAcct;
} SettlementInformation3;

// CashAccount7 
typedef struct {
	AccountIdentification3Choice Id;
	CashAccountType2 Tp;
	char Ccy;
	char Nm;
} CashAccount7;

// AccountIdentification3Choice 
typedef struct {
	char IBAN;
	char BBAN;
	char UPIC;
	SimpleIdentificationInformation2 PrtryAcct;
} AccountIdentification3Choice;

// IBANIdentifier 
typedef char IBANIdentifier;

// BBANIdentifier 
typedef char BBANIdentifier;

// UPICIdentifier 
typedef char UPICIdentifier;

// SimpleIdentificationInformation2 
typedef struct {
	char Id;
} SimpleIdentificationInformation2;

// CashAccountType2 
typedef struct {
	char Cd;
	char Prtry;
} CashAccountType2;

// CashAccountType4Code 
typedef char CashAccountType4Code;

// ClearingSystemIdentification1Choice 
typedef struct {
	char ClrSysId;
	char Prtry;
} ClearingSystemIdentification1Choice;

// CashClearingSystem3Code 
typedef char CashClearingSystem3Code;

// BranchAndFinancialInstitutionIdentification3 
typedef struct {
	FinancialInstitutionIdentification5Choice FinInstnId;
	BranchData BrnchId;
} BranchAndFinancialInstitutionIdentification3;

// FinancialInstitutionIdentification5Choice 
typedef struct {
	char BIC;
	ClearingSystemMemberIdentification3Choice ClrSysMmbId;
	NameAndAddress7 NmAndAdr;
	GenericIdentification3 PrtryId;
	FinancialInstitutionIdentification3 CmbndId;
} FinancialInstitutionIdentification5Choice;

// ClearingSystemMemberIdentification3Choice 
typedef struct {
	char Id;
	char Prtry;
} ClearingSystemMemberIdentification3Choice;

// ExternalClearingSystemMemberCode 
typedef char ExternalClearingSystemMemberCode;

// NameAndAddress7 
typedef struct {
	char Nm;
	PostalAddress1 PstlAdr;
} NameAndAddress7;

// FinancialInstitutionIdentification3 
typedef struct {
	char BIC;
	ClearingSystemMemberIdentification3Choice ClrSysMmbId;
	char Nm;
	PostalAddress1 PstlAdr;
	GenericIdentification3 PrtryId;
} FinancialInstitutionIdentification3;

// BranchData 
typedef struct {
	char Id;
	char Nm;
	PostalAddress1 PstlAdr;
} BranchData;

// PaymentTypeInformation6 
typedef struct {
	char InstrPrty;
	ServiceLevel2Choice SvcLvl;
	char ClrChanl;
	LocalInstrument1Choice LclInstrm;
	char SeqTp;
	char CtgyPurp;
} PaymentTypeInformation6;

// ServiceLevel2Choice 
typedef struct {
	char Cd;
	char Prtry;
} ServiceLevel2Choice;

// ServiceLevel1Code 
typedef char ServiceLevel1Code;

// LocalInstrument1Choice 
typedef struct {
	char Cd;
	char Prtry;
} LocalInstrument1Choice;

// ExternalLocalInstrumentCode 
typedef char ExternalLocalInstrumentCode;

// SequenceType1Code 
typedef char SequenceType1Code;

// PaymentCategoryPurpose1Code 
typedef char PaymentCategoryPurpose1Code;

// PaymentMethod4Code 
typedef char PaymentMethod4Code;

// MandateRelatedInformation1 
typedef struct {
	char MndtId;
	char DtOfSgntr;
	bool AmdmntInd;
	AmendmentInformationDetails1 AmdmntInfDtls;
	char ElctrncSgntr;
	char FrstColltnDt;
	char FnlColltnDt;
	char Frqcy;
} MandateRelatedInformation1;

// TrueFalseIndicator 
typedef bool TrueFalseIndicator;

// AmendmentInformationDetails1 
typedef struct {
	char OrgnlMndtId;
	PartyIdentification8 OrgnlCdtrSchmeId;
	BranchAndFinancialInstitutionIdentification3 OrgnlCdtrAgt;
	CashAccount7 OrgnlCdtrAgtAcct;
	PartyIdentification8 OrgnlDbtr;
	CashAccount7 OrgnlDbtrAcct;
	BranchAndFinancialInstitutionIdentification3 OrgnlDbtrAgt;
	CashAccount7 OrgnlDbtrAgtAcct;
	char OrgnlFnlColltnDt;
	char OrgnlFrqcy;
} AmendmentInformationDetails1;

// Frequency1Code 
typedef char Frequency1Code;

// Max1025Text 
typedef char Max1025Text;

// RemittanceInformation1 
typedef struct {
	char Ustrd[];
	StructuredRemittanceInformation6 Strd[];
} RemittanceInformation1;

// StructuredRemittanceInformation6 
typedef struct {
	ReferredDocumentInformation1 RfrdDocInf;
	char RfrdDocRltdDt;
	ReferredDocumentAmount1Choice RfrdDocAmt[];
	CreditorReferenceInformation1 CdtrRefInf;
	PartyIdentification8 Invcr;
	PartyIdentification8 Invcee;
	char AddtlRmtInf;
} StructuredRemittanceInformation6;

// ReferredDocumentInformation1 
typedef struct {
	ReferredDocumentType1 RfrdDocTp;
	char RfrdDocNb;
} ReferredDocumentInformation1;

// ReferredDocumentType1 
typedef struct {
	char Cd;
	char Prtry;
	char Issr;
} ReferredDocumentType1;

// DocumentType2Code 
typedef char DocumentType2Code;

// ReferredDocumentAmount1Choice 
typedef struct {
	CurrencyAndAmount DuePyblAmt;
	CurrencyAndAmount DscntApldAmt;
	CurrencyAndAmount RmtdAmt;
	CurrencyAndAmount CdtNoteAmt;
	CurrencyAndAmount TaxAmt;
} ReferredDocumentAmount1Choice;

// CreditorReferenceInformation1 
typedef struct {
	CreditorReferenceType1 CdtrRefTp;
	char CdtrRef;
} CreditorReferenceInformation1;

// CreditorReferenceType1 
typedef struct {
	char Cd;
	char Prtry;
	char Issr;
} CreditorReferenceType1;

// DocumentType3Code 
typedef char DocumentType3Code;
