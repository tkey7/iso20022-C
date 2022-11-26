// TKEY7 iso20022

typedef BusinessApplicationHeaderV03 AppHdr;

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

// BusinessApplicationHeader7 
typedef struct {
	char CharSet;
	Party44Choice Fr;
	Party44Choice To;
	char BizMsgIdr;
	char MsgDefIdr;
	char BizSvc;
	ImplementationSpecification1 MktPrctc;
	char CreDt;
	char BizPrcgDt;
	char CpyDplct;
	bool PssblDplct;
	char Prty;
	SignatureEnvelope Sgntr;
} BusinessApplicationHeader7;

// BusinessApplicationHeaderV03 
typedef struct {
	char CharSet;
	Party44Choice Fr;
	Party44Choice To;
	char BizMsgIdr;
	char MsgDefIdr;
	char BizSvc;
	ImplementationSpecification1 MktPrctc;
	char CreDt;
	char BizPrcgDt;
	char CpyDplct;
	bool PssblDplct;
	char Prty;
	SignatureEnvelope Sgntr;
	BusinessApplicationHeader7 Rltd[];
} BusinessApplicationHeaderV03;

// BusinessMessagePriorityCode 
typedef char BusinessMessagePriorityCode;

// ClearingSystemIdentification2Choice 
typedef struct {
	char Cd;
	char Prtry;
} ClearingSystemIdentification2Choice;

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

// CopyDuplicate1Code 
typedef char CopyDuplicate1Code;

// CountryCode 
typedef char CountryCode;

// DateAndPlaceOfBirth1 
typedef struct {
	char BirthDt;
	char PrvcOfBirth;
	char CityOfBirth;
	char CtryOfBirth;
} DateAndPlaceOfBirth1;

// Exact4AlphaNumericText 
typedef char Exact4AlphaNumericText;

// ExternalClearingSystemIdentification1Code 
typedef char ExternalClearingSystemIdentification1Code;

// ExternalFinancialInstitutionIdentification1Code 
typedef char ExternalFinancialInstitutionIdentification1Code;

// ExternalOrganisationIdentification1Code 
typedef char ExternalOrganisationIdentification1Code;

// ExternalPersonIdentification1Code 
typedef char ExternalPersonIdentification1Code;

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

// ISODate 
typedef char ISODate;

// ISODateTime 
typedef char ISODateTime;

// ImplementationSpecification1 
typedef struct {
	char Regy;
	char Id;
} ImplementationSpecification1;

// LEIIdentifier 
typedef char LEIIdentifier;

// Max128Text 
typedef char Max128Text;

// Max140Text 
typedef char Max140Text;

// Max16Text 
typedef char Max16Text;

// Max2048Text 
typedef char Max2048Text;

// Max350Text 
typedef char Max350Text;

// Max35Text 
typedef char Max35Text;

// Max4Text 
typedef char Max4Text;

// Max70Text 
typedef char Max70Text;

// NamePrefix2Code 
typedef char NamePrefix2Code;

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

// Party44Choice 
typedef struct {
	PartyIdentification135 OrgId;
	BranchAndFinancialInstitutionIdentification6 FIId;
} Party44Choice;

// PartyIdentification135 
typedef struct {
	char Nm;
	PostalAddress24 PstlAdr;
	Party38Choice Id;
	char CtryOfRes;
	Contact4 CtctDtls;
} PartyIdentification135;

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

// SignatureEnvelope 
typedef struct {
} SignatureEnvelope;

// UnicodeChartsCode 
typedef char UnicodeChartsCode;

// YesNoIndicator 
typedef bool YesNoIndicator;
