
"use strict";

let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let TestNestedService = require('./TestNestedService.js')
let SendBytes = require('./SendBytes.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let TestEmpty = require('./TestEmpty.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')
let TestArrayRequest = require('./TestArrayRequest.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let AddTwoInts = require('./AddTwoInts.js')

module.exports = {
  TestRequestAndResponse: TestRequestAndResponse,
  TestNestedService: TestNestedService,
  SendBytes: SendBytes,
  TestResponseOnly: TestResponseOnly,
  TestRequestOnly: TestRequestOnly,
  TestEmpty: TestEmpty,
  TestMultipleRequestFields: TestMultipleRequestFields,
  TestArrayRequest: TestArrayRequest,
  TestMultipleResponseFields: TestMultipleResponseFields,
  AddTwoInts: AddTwoInts,
};
