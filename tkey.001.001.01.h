// TKEY7 iso20022

typedef Document Document;

// ExternalFinancialInstitutionIdentification1Code 
typedef char ExternalFinancialInstitutionIdentification1Code;

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

// SettlementMethod1Code 
typedef char SettlementMethod1Code;

// ExternalCashClearingSystem1Code 
typedef char ExternalCashClearingSystem1Code;

// IBAN2007Identifier 
typedef char IBAN2007Identifier;

// Max34Text 
typedef char Max34Text;

// ExternalAccountIdentification1Code 
typedef char ExternalAccountIdentification1Code;

// ExternalCashAccountType1Code 
typedef char ExternalCashAccountType1Code;

// ActiveOrHistoricCurrencyCode 
typedef char ActiveOrHistoricCurrencyCode;

// Max70Text 
typedef char Max70Text;

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

// ClearingSystemIdentification3Choice 
typedef struct {
	char Cd;
	char Prtry;
} ClearingSystemIdentification3Choice;

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

// GenericAccountIdentification1 
typedef struct {
	char Id;
	AccountSchemeName1Choice SchmeNm;
	char Issr;
} GenericAccountIdentification1;

// AccountSchemeName1Choice 
typedef struct {
	char Cd;
	char Prtry;
} AccountSchemeName1Choice;

// CashAccountType2Choice 
typedef struct {
	char Cd;
	char Prtry;
} CashAccountType2Choice;

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

// FinancialIdentificationSchemeName1Choice 
typedef struct {
	char Cd;
	char Prtry;
} FinancialIdentificationSchemeName1Choice;

// GenericFinancialIdentification1 
typedef struct {
	char Id;
	FinancialIdentificationSchemeName1Choice SchmeNm;
	char Issr;
} GenericFinancialIdentification1;

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

// CustomerIdentificationStatusNotificationV01 
typedef struct {
	GroupHeader70 GrpHdr;
	AccountInformationAndIdentificationStatus1 AcctInfAndIdSts[];
} CustomerIdentificationStatusNotificationV01;

// AccountInformationAndIdentificationStatus1 
typedef struct {
	char Id;
	AccountIdentificationInformation1 AcctIdInf;
	CustomerIdentificationInformation1 CstmrIdInf;
} AccountInformationAndIdentificationStatus1;

// AccountIdentificationInformation1 
typedef struct {
	char AdrsngId;
	char SttlmAcctId;
	char NoteTp;
	char Note;
	char CstmrAcctIdSts;
	PaymentIdentification3 PmtId;
} AccountIdentificationInformation1;

// CustomerIdentificationInformation1 
typedef struct {
	char KYCSts;
	char AMLSts;
	char PIIInf;
	PaymentIdentification3 PmtId;
} CustomerIdentificationInformation1;

// PaymentIdentification3 
typedef struct {
	char InstrId;
	char EndToEndId;
	char TxId;
	char ClrSysRef;
} PaymentIdentification3;

// NoteType1 
typedef char NoteType1;

// Note1 
typedef char Note1;

// CustomerAccountIdentificationStatus1 
typedef char CustomerAccountIdentificationStatus1;

// PersonallyIdentifiableInformationInfo1 
typedef char PersonallyIdentifiableInformationInfo1;

// KYCStatus1 
typedef char KYCStatus1;

// AMLStatus1 
typedef char AMLStatus1;

typedef char AddressingIdentification1;

typedef char SettlementAccountIdentification1;

// DateTimeString 
typedef char DateTimeString;

// DateString 
typedef char DateString;
