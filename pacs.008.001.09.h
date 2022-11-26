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

// AnyBICDec2014Identifier 
typedef char AnyBICDec2014Identifier;

// BICFIDec2014Identifier 
typedef char BICFIDec2014Identifier;

// BaseOneRate 
typedef float BaseOneRate;

// BatchBookingIndicator 
typedef bool BatchBookingIndicator;

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

// CashAccount38 
typedef struct {
	AccountIdentification4Choice Id;
	CashAccountType2Choice Tp;
	char Ccy;
	char Nm;
	ProxyAccountIdentification1 Prxy;
} CashAccount38;

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

// Charges7 
typedef struct {
	ActiveOrHistoricCurrencyAndAmount Amt;
	BranchAndFinancialInstitutionIdentification6 Agt;
} Charges7;

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

// CreditTransferTransaction43 
typedef struct {
	PaymentIdentification13 PmtId;
	PaymentTypeInformation28 PmtTpInf;
	ActiveCurrencyAndAmount IntrBkSttlmAmt;
	char IntrBkSttlmDt;
	char SttlmPrty;
	SettlementDateTimeIndication1 SttlmTmIndctn;
	SettlementTimeRequest2 SttlmTmReq;
	char AccptncDtTm;
	char PoolgAdjstmntDt;
	ActiveOrHistoricCurrencyAndAmount InstdAmt;
	float XchgRate;
	char ChrgBr;
	Charges7 ChrgsInf[];
	CreditTransferMandateData1 MndtRltdInf;
	BranchAndFinancialInstitutionIdentification6 PrvsInstgAgt1;
	CashAccount38 PrvsInstgAgt1Acct;
	BranchAndFinancialInstitutionIdentification6 PrvsInstgAgt2;
	CashAccount38 PrvsInstgAgt2Acct;
	BranchAndFinancialInstitutionIdentification6 PrvsInstgAgt3;
	CashAccount38 PrvsInstgAgt3Acct;
	BranchAndFinancialInstitutionIdentification6 InstgAgt;
	BranchAndFinancialInstitutionIdentification6 InstdAgt;
	BranchAndFinancialInstitutionIdentification6 IntrmyAgt1;
	CashAccount38 IntrmyAgt1Acct;
	BranchAndFinancialInstitutionIdentification6 IntrmyAgt2;
	CashAccount38 IntrmyAgt2Acct;
	BranchAndFinancialInstitutionIdentification6 IntrmyAgt3;
	CashAccount38 IntrmyAgt3Acct;
	PartyIdentification135 UltmtDbtr;
	PartyIdentification135 InitgPty;
	PartyIdentification135 Dbtr;
	CashAccount38 DbtrAcct;
	BranchAndFinancialInstitutionIdentification6 DbtrAgt;
	CashAccount38 DbtrAgtAcct;
	BranchAndFinancialInstitutionIdentification6 CdtrAgt;
	CashAccount38 CdtrAgtAcct;
	PartyIdentification135 Cdtr;
	CashAccount38 CdtrAcct;
	PartyIdentification135 UltmtCdtr;
	InstructionForCreditorAgent3 InstrForCdtrAgt[];
	InstructionForNextAgent1 InstrForNxtAgt[];
	Purpose2Choice Purp;
	RegulatoryReporting3 RgltryRptg[];
	TaxInformation8 Tax;
	RemittanceLocation7 RltdRmtInf[];
	RemittanceInformation16 RmtInf;
	SupplementaryData1 SplmtryData[];
} CreditTransferTransaction43;

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

// ExternalClearingSystemIdentification1Code 
typedef char ExternalClearingSystemIdentification1Code;

// ExternalCreditorAgentInstruction1Code 
typedef char ExternalCreditorAgentInstruction1Code;

// ExternalDiscountAmountType1Code 
typedef char ExternalDiscountAmountType1Code;

// ExternalDocumentLineType1Code 
typedef char ExternalDocumentLineType1Code;

// ExternalFinancialInstitutionIdentification1Code 
typedef char ExternalFinancialInstitutionIdentification1Code;

// ExternalGarnishmentType1Code 
typedef char ExternalGarnishmentType1Code;

// ExternalLocalInstrument1Code 
typedef char ExternalLocalInstrument1Code;

// ExternalMandateSetupReason1Code 
typedef char ExternalMandateSetupReason1Code;

// ExternalOrganisationIdentification1Code 
typedef char ExternalOrganisationIdentification1Code;

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

// FIToFICustomerCreditTransferV09 
typedef struct {
	GroupHeader93 GrpHdr;
	CreditTransferTransaction43 CdtTrfTxInf[];
	SupplementaryData1 SplmtryData[];
} FIToFICustomerCreditTransferV09;

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

// GroupHeader93 
typedef struct {
	char MsgId;
	char CreDtTm;
	bool BtchBookg;
	char NbOfTxs;
	float CtrlSum;
	ActiveCurrencyAndAmount TtlIntrBkSttlmAmt;
	char IntrBkSttlmDt;
	SettlementInstruction7 SttlmInf;
	PaymentTypeInformation28 PmtTpInf;
	BranchAndFinancialInstitutionIdentification6 InstgAgt;
	BranchAndFinancialInstitutionIdentification6 InstdAgt;
} GroupHeader93;

// IBAN2007Identifier 
typedef char IBAN2007Identifier;

// ISODate 
typedef char ISODate;

// ISODateTime 
typedef char ISODateTime;

// ISOTime 
typedef char ISOTime;

// Instruction4Code 
typedef char Instruction4Code;

// InstructionForCreditorAgent3 
typedef struct {
	char Cd;
	char InstrInf;
} InstructionForCreditorAgent3;

// InstructionForNextAgent1 
typedef struct {
	char Cd;
	char InstrInf;
} InstructionForNextAgent1;

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

// Max10KBinary 
typedef char Max10KBinary[];

// Max10Text 
typedef char Max10Text;

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

// NameAndAddress16 
typedef struct {
	char Nm;
	PostalAddress24 Adr;
} NameAndAddress16;

// NamePrefix2Code 
typedef char NamePrefix2Code;

// Number 
typedef float Number;

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

// PartyIdentification135 
typedef struct {
	char Nm;
	PostalAddress24 PstlAdr;
	Party38Choice Id;
	char CtryOfRes;
	Contact4 CtctDtls;
} PartyIdentification135;

// PaymentIdentification13 
typedef struct {
	char InstrId;
	char EndToEndId;
	char TxId;
	char UETR;
	char ClrSysRef;
} PaymentIdentification13;

// PaymentTypeInformation28 
typedef struct {
	char InstrPrty;
	char ClrChanl;
	ServiceLevel8Choice SvcLvl[];
	LocalInstrument2Choice LclInstrm;
	CategoryPurpose1Choice CtgyPurp;
} PaymentTypeInformation28;

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

// Priority3Code 
typedef char Priority3Code;

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

// RegulatoryAuthority2 
typedef struct {
	char Nm;
	char Ctry;
} RegulatoryAuthority2;

// RegulatoryReporting3 
typedef struct {
	char DbtCdtRptgInd;
	RegulatoryAuthority2 Authrty;
	StructuredRegulatoryReporting3 Dtls[];
} RegulatoryReporting3;

// RegulatoryReportingType1Code 
typedef char RegulatoryReportingType1Code;

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

// RemittanceInformation16 
typedef struct {
	char Ustrd[];
	StructuredRemittanceInformation16 Strd[];
} RemittanceInformation16;

// RemittanceLocation7 
typedef struct {
	char RmtId;
	RemittanceLocationData1 RmtLctnDtls[];
} RemittanceLocation7;

// RemittanceLocationData1 
typedef struct {
	char Mtd;
	char ElctrncAdr;
	NameAndAddress16 PstlAdr;
} RemittanceLocationData1;

// RemittanceLocationMethod2Code 
typedef char RemittanceLocationMethod2Code;

// ServiceLevel8Choice 
typedef struct {
	char Cd;
	char Prtry;
} ServiceLevel8Choice;

// SettlementDateTimeIndication1 
typedef struct {
	char DbtDtTm;
	char CdtDtTm;
} SettlementDateTimeIndication1;

// SettlementInstruction7 
typedef struct {
	char SttlmMtd;
	CashAccount38 SttlmAcct;
	ClearingSystemIdentification3Choice ClrSys;
	BranchAndFinancialInstitutionIdentification6 InstgRmbrsmntAgt;
	CashAccount38 InstgRmbrsmntAgtAcct;
	BranchAndFinancialInstitutionIdentification6 InstdRmbrsmntAgt;
	CashAccount38 InstdRmbrsmntAgtAcct;
	BranchAndFinancialInstitutionIdentification6 ThrdRmbrsmntAgt;
	CashAccount38 ThrdRmbrsmntAgtAcct;
} SettlementInstruction7;

// SettlementMethod1Code 
typedef char SettlementMethod1Code;

// SettlementTimeRequest2 
typedef struct {
	char CLSTm;
	char TillTm;
	char FrTm;
	char RjctTm;
} SettlementTimeRequest2;

// StructuredRegulatoryReporting3 
typedef struct {
	char Tp;
	char Dt;
	char Ctry;
	char Cd;
	ActiveOrHistoricCurrencyAndAmount Amt;
	char Inf[];
} StructuredRegulatoryReporting3;

// StructuredRemittanceInformation16 
typedef struct {
	ReferredDocumentInformation7 RfrdDocInf[];
	RemittanceAmount2 RfrdDocAmt;
	CreditorReferenceInformation2 CdtrRefInf;
	PartyIdentification135 Invcr;
	PartyIdentification135 Invcee;
	TaxInformation7 TaxRmt;
	Garnishment3 GrnshmtRmt;
	char AddtlRmtInf[];
} StructuredRemittanceInformation16;

// SupplementaryData1 
typedef struct {
	char PlcAndNm;
	SupplementaryDataEnvelope1 Envlp;
} SupplementaryData1;

// SupplementaryDataEnvelope1 
typedef struct {
} SupplementaryDataEnvelope1;

// TaxAmount2 
typedef struct {
	float Rate;
	ActiveOrHistoricCurrencyAndAmount TaxblBaseAmt;
	ActiveOrHistoricCurrencyAndAmount TtlAmt;
	TaxRecordDetails2 Dtls[];
} TaxAmount2;

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

// TaxInformation7 
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
	TaxRecord2 Rcrd[];
} TaxInformation7;

// TaxInformation8 
typedef struct {
	TaxParty1 Cdtr;
	TaxParty2 Dbtr;
	char AdmstnZone;
	char RefNb;
	char Mtd;
	ActiveOrHistoricCurrencyAndAmount TtlTaxblBaseAmt;
	ActiveOrHistoricCurrencyAndAmount TtlTaxAmt;
	char Dt;
	float SeqNb;
	TaxRecord2 Rcrd[];
} TaxInformation8;

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

// TaxPeriod2 
typedef struct {
	char Yr;
	char Tp;
	DatePeriod2 FrToDt;
} TaxPeriod2;

// TaxRecord2 
typedef struct {
	char Tp;
	char Ctgy;
	char CtgyDtls;
	char DbtrSts;
	char CertId;
	char FrmsCd;
	TaxPeriod2 Prd;
	TaxAmount2 TaxAmt;
	char AddtlInf;
} TaxRecord2;

// TaxRecordDetails2 
typedef struct {
	TaxPeriod2 Prd;
	ActiveOrHistoricCurrencyAndAmount Amt;
} TaxRecordDetails2;

// TaxRecordPeriod1Code 
typedef char TaxRecordPeriod1Code;

// TrueFalseIndicator 
typedef bool TrueFalseIndicator;

// UUIDv4Identifier 
typedef char UUIDv4Identifier;
