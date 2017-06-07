/* soapClient.cpp
   Generated by gSOAP 2.8.16 from getData.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.16 2015-07-09 02:04:45 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__PublishEvent(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns2__EventMessageType *ns2__EventMessage, ns2__ResponseMessageType *ns2__ResponseMessage)
{	struct __ns1__PublishEvent soap_tmp___ns1__PublishEvent;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://iec.ch/61968/";
	if (soap_action == NULL)
		soap_action = "http://iec.ch/61968/PublishEvent";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns1__PublishEvent.ns2__EventMessage = ns2__EventMessage;
	soap_serializeheader(soap);
	soap_serialize___ns1__PublishEvent(soap, &soap_tmp___ns1__PublishEvent);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__PublishEvent(soap, &soap_tmp___ns1__PublishEvent, "-ns1:PublishEvent", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__PublishEvent(soap, &soap_tmp___ns1__PublishEvent, "-ns1:PublishEvent", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns2__ResponseMessage)
		return soap_closesock(soap);
	ns2__ResponseMessage->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__ResponseMessage->soap_get(soap, "ns2:ResponseMessage", "ns2:ResponseMessageType");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__Request(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns2__RequestMessageType *ns2__RequestMessage, ns2__ResponseMessageType *ns2__ResponseMessage)
{	struct __ns1__Request soap_tmp___ns1__Request;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://iec.ch/61968/";
	if (soap_action == NULL)
		soap_action = "http://iec.ch/61968/Requ est";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns1__Request.ns2__RequestMessage = ns2__RequestMessage;
	soap_serializeheader(soap);
	soap_serialize___ns1__Request(soap, &soap_tmp___ns1__Request);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__Request(soap, &soap_tmp___ns1__Request, "-ns1:Request", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__Request(soap, &soap_tmp___ns1__Request, "-ns1:Request", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns2__ResponseMessage)
		return soap_closesock(soap);
	ns2__ResponseMessage->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__ResponseMessage->soap_get(soap, "ns2:ResponseMessage", "ns2:ResponseMessageType");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__Response(struct soap *soap, const char *soap_endpoint, const char *soap_action, ns2__ResponseMessageType *ns2__ResponseMessage, struct __ns1__ResponseResponse &_param_1)
{	struct __ns1__Response soap_tmp___ns1__Response;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://iec.ch/61968/";
	if (soap_action == NULL)
		soap_action = "http://iec.ch/61968/Response";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns1__Response.ns2__ResponseMessage = ns2__ResponseMessage;
	soap_serializeheader(soap);
	soap_serialize___ns1__Response(soap, &soap_tmp___ns1__Response);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__Response(soap, &soap_tmp___ns1__Response, "-ns1:Response", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__Response(soap, &soap_tmp___ns1__Response, "-ns1:Response", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&_param_1)
		return soap_closesock(soap);
	soap_default___ns1__ResponseResponse(soap, &_param_1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get___ns1__ResponseResponse(soap, &_param_1, "-ns1:ResponseResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */
