// TKEY7 iso20022

typedef Document Document;

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

// CaseForwardingNotification3 
typedef struct {
	char Justfn;
} CaseForwardingNotification3;

// CaseForwardingNotification3Code 
typedef char CaseForwardingNotification3Code;

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

// NotificationOfCaseAssignmentV05 
typedef struct {
	ReportHeader5 Hdr;
	Case5 Case;
	CaseAssignment5 Assgnmt;
	CaseForwardingNotification3 Ntfctn;
	SupplementaryData1 SplmtryData[];
} NotificationOfCaseAssignmentV05;

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

// ReportHeader5 
typedef struct {
	char Id;
	Party40Choice Fr;
	Party40Choice To;
	char CreDtTm;
} ReportHeader5;

// SupplementaryData1 
typedef struct {
	char PlcAndNm;
	SupplementaryDataEnvelope1 Envlp;
} SupplementaryData1;

// SupplementaryDataEnvelope1 
typedef struct {
} SupplementaryDataEnvelope1;

// YesNoIndicator 
typedef bool YesNoIndicator;
