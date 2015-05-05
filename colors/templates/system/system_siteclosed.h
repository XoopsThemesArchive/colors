<!DOCTYPE html PUBLIC '//W3C//DTD XHTML 1.0 Transitional//EN' 'http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd'>
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<{$langcode}>" lang="<{$langcode}>">
<head>
<meta http-equiv="content-type" content="text/html; charset=<{$charset}>" />
<meta http-equiv="content-language" content="<{$langcode}>" />
<title><{$sitename}></title>
<link rel="stylesheet" type="text/css" media="all" href="<{$xoops_url}>/xoops.css" />
</head>
<body style="margin: 0; padding: 0; font-size: small; font-family: Verdana, Arial, Helvetica, sans-serif;">
<table cellspacing="0">
<tr id="header">
<td style="width: 150px; background-color: #2F5376; vertical-align: middle; text-align:center;"><a href="<{$xoops_url}>/"><img src="<{$xoops_imageurl}>logo.gif" width="150" alt="" /></a></td>
<td style="width: 100%; background-color: #2F5376; vertical-align: middle; text-align:center;">&nbsp;</td>
</tr>
<tr>
<td style="height: 8px; border-bottom: 1px solid silver; background-color: #dddddd;" colspan="2">&nbsp;</td>
</tr>
</table>
<table cellspacing="1" align="center" width="80%" border="0" cellpadding="10px;">
<tr>
<td align="center"><div style="background-color: #DDFFDF; color: #136C99; text-align: center; border-top: 1px solid #DDDDFF; border-left: 1px solid #DDDDFF; border-right: 1px solid #AAAAAA; border-bottom: 1px solid #AAAAAA; font-weight: bold; padding: 10px;"><{$lang_siteclosemsg}></div></td>
</tr>
</table>
<form action="<{$xoops_url}>/user.php" method="post">
<table cellspacing="0" align="center" style="border: 1px solid silver; width: 200px;">
<tr>
<th style="background-color: #2F5376; color: #FFFFFF; padding : 2px; vertical-align : middle;" colspan="2"><{$lang_login}></th>
</tr>
<tr>
<td style="padding: 2px;"><{$lang_username}></td><td style="padding: 2px;"><input type="text" name="uname" size="12" value="" /></td>
</tr>
<tr>
<td style="padding: 2px;"><{$lang_password}></td><td style="padding: 2px;"><input type="password" name="pass" size="12" /></td>
</tr>
<tr>
<td style="padding: 2px;">&nbsp;</td>
<td style="padding: 2px;"><input type="hidden" name="xoops_login" value="1" /><input type="submit" value="<{$lang_login}>" /></td>
</tr>
</table>
</form>
<table cellspacing="0" width="100%">
<td style="height:8px; border-bottom: 1px solid silver; border-top: 1px solid silver; background-color: #dddddd;" colspan="2">&nbsp;</td>
</table>
</body>
</html>