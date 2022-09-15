// validate string is an email
const isEmail = (email) => {
    const re = /^(([^<>()[\]\\.,;:\s@"]+(\.[^<>()[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    return re.test(String(email).toLowerCase());
}

// validate string is a phone number
const isPhone = (phone) => {
    const re = /^(\+?0?86\-?)?1[345789]\d{9}$/;
    return re.test(String(phone));
}

// validate string is a valid mobile number in spain
const isMobile = (mobile) => {
    const re = /^(\+?34)?(6\d{1}|7[1234])\d{7}$/;
    return re.test(String(mobile));
}