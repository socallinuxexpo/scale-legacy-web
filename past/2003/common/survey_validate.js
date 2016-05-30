// construction function
function ValidateFormat(){
	this._debug = false;
}

// RegExp operation
function Validate_Input(input_from_page, regexp_object){
	if(input_from_page.length == 0){return true;}
	return regexp_object.test(input_from_page);
}

// Length operation
function Size_Input(input_from_page, size_max){
	if(this._debug){alert("length:" + input_from_page.length + "max:" + size_max);}
	return input_from_page.length > size_max;
}

// Required attribute
function Required_Attribute(input_from_page){
	return input_from_page.length == 0;
}

//
// prototype Object linkege for JavaScript
//
ValidateFormat.prototype.ValidateInput = Validate_Input;
ValidateFormat.prototype.SizeInput = Size_Input;

ValidateFormat.prototype.RequiredAttribute = Required_Attribute;

function ValidateAlphaFormat(size_max, isrequired){
	this._size_max = size_max;
	this._reg_exp = new RegExp("[A-Za-z]+");
	this._isrequired = isrequired;
	this._debug = false;
	}

function setDebugOn(){this._debug = true;}
	
//
// prototype Object linkege for JavaScript
// isrequired is a Boolean instance
//
ValidateAlphaFormat.prototype = new ValidateFormat();
ValidateAlphaFormat.prototype.ValidateAlpha = function(input_from_page, control_name){

	if(this._debug){alert("ValidateAlphaFormat input:" + input_from_page);}
	
	if(this.SizeInput(input_from_page, this._size_max)){
		//alert(input_from_page + " must be no greater than "  + 
		//this._size_max + "characters");
	}
	if( !this.ValidateInput(input_from_page, this._reg_exp)){
		//alert(input_from_page + " must only contain alphabetic characters");
		return 1;
	}
	if( this._isrequired.valueOf() && this.RequiredAttribute(input_from_page) ){
		//alert(control_name + " is a required field");
		return 1;
	}
	return 0;
		
}

function Validate5NumFormat(isrequired){
	this._reg_exp = new RegExp("[0-9]{5}");
	this._isrequired = isrequired;
	this._debug = false;
	}
	
//
// prototype Object linkege for JavaScript
//
Validate5NumFormat.prototype = new ValidateFormat();
Validate5NumFormat.prototype.ValidateAlpha = function(input_from_page, control_name){

	if(this._debug){alert("ValidateAlphaFormat input:" + input_from_page);}
	
	if( !this.ValidateInput(input_from_page, this._reg_exp)){
		//alert(input_from_page + " must only contain alphabetic characters and a dot");
		return 1;
	}
	if( this._isrequired.valueOf() && this.RequiredAttribute(input_from_page) ){
		//alert(control_name + " is a required field");
		return 1
	}
	
	return 0	
}

function ValidateEmail(size_max, isrequired){
	this._size_max = size_max;
	this._reg_exp = new RegExp("[^\@]+\@[^\.]+\..+");
	this._isrequired = isrequired;
	this._debug = false;
	}
	
//
// prototype Object linkege for JavaScript
//
ValidateEmail.prototype = new ValidateFormat();
ValidateEmail.prototype.ValidateAlpha = 
	function(input_from_page, control_name){

	if(this._debug){alert("ValidateAlphaFormat input:" + input_from_page + ":" + this._reg_exp.toString());}
	
	if(this.SizeInput(input_from_page, this._size_max)){
		//alert(input_from_page + " must be no greater than "  + 
		//this._size_max + "characters");
		return 1;
	}
	if( !this.ValidateInput(input_from_page, this._reg_exp)){
		//alert(input_from_page + " must contain name@emailaddress.net ...");
		return 1;
	}
	if( this._isrequired.valueOf() && this.RequiredAttribute(input_from_page) ){
		//alert(control_name + " is a required field");
		return 1;
	}
	return 0;	
}

function DelegateEmailRequired(input_value, control_name){
	var validator = new ValidateEmail(60, new Boolean(true));
	return validator.ValidateAlpha(input_value, control_name);
}

function DelegateNumber5Required(input_value, control_name){
	var validator = new Validate5NumFormat(5, new Boolean(true));
	return validator.ValidateAlpha(input_value, control_name);
}

function DelegateAlpha60Required(input_value, control_name){
	var validator = new ValidateAlphaFormat(60, new Boolean(true));
	return validator.ValidateAlpha(input_value, control_name);
}


function verifySubmitData() {
	if (0 != DelegateAlpha60Required(document.data.name.value, "Name")) {
		alert("Please enter a name.");
		return false;
	}
	if (0 != DelegateEmailRequired(document.data.email.value, "Email")) {
		alert("Please enter a valid email address.");
		return false;
	}
	if (0 != DelegateNumber5Required(document.data.zip.value, "Zip")) {
		alert("Please enter a valid zip code.");
		return false;
	}
	if ((document.data.a1[0].checked == false) &&
		(document.data.a1[1].checked == false) &&
		(document.data.a1[2].checked == false) &&
		(document.data.a1[3].checked == false) &&
		(document.data.a1[4].checked == false) &&
		(document.data.a1[5].checked == false) &&
		(document.data.a1[6].checked == false) &&
		(document.data.a1[7].checked == false)) {
		alert("Please answer the first survey question.");
		return false;
	}

	if ((document.data.a2[0].checked == false) &&
		(document.data.a2[1].checked == false) &&
		(document.data.a2[2].checked == false) &&
		(document.data.a2[3].checked == false) &&
		(document.data.a2[4].checked == false) &&
		(document.data.a2[5].checked == false)) {
		alert("Please answer the second survey question.");
		return false;
	}

	if ((document.data.a3[0].checked == false) &&
		(document.data.a3[1].checked == false) &&
		(document.data.a3[2].checked == false) &&
		(document.data.a3[3].checked == false) &&
		(document.data.a3[4].checked == false) &&
		(document.data.a3[5].checked == false) &&
		(document.data.a3[6].checked == false) &&
		(document.data.a3[7].checked == false) &&
		(document.data.a3[8].checked == false) &&
		(document.data.a3[9].checked == false)) {
		alert("Please answer the third survey question.");
		return false;
	}

	if ((document.data.a4[0].checked == false) &&
		(document.data.a4[1].checked == false) &&
		(document.data.a4[2].checked == false) &&
		(document.data.a4[3].checked == false)) {
		alert("Please answer the fourth survey question.");
		return false;
	}

	if ((document.data.a5[0].checked == false) &&
		(document.data.a5[1].checked == false) &&
		(document.data.a5[2].checked == false) &&
		(document.data.a5[3].checked == false)) {
		alert("Please answer the fifth survey question.");
		return false;
	}

	if ((document.data.a6[0].checked == false) &&
		(document.data.a6[1].checked == false)) {
		alert("Please answer the sixth survey question.");
		return false;
	}

	if ((document.data.a7[0].checked == false) &&
		(document.data.a7[1].checked == false) &&
		(document.data.a7[2].checked == false) &&
		(document.data.a7[3].checked == false)) {
		alert("Please answer the seventh survey question.");
		return false;
	}

	if ((document.data.a8[0].checked == false) &&
		(document.data.a8[1].checked == false)) {
		alert("Please answer the eighth survey question.");
		return false;
	}
	if (0 != DelegateAlpha60Required(document.data.a9.value, "Q9")) {
		alert("Please answer the nineth survey question.");
		return false;
	}

	return true;
}
